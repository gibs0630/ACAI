// Main RGB Matrix Animation | Alex Mackimmie, Cole Vanderlaan, Ian Finnigan | Last Updated 11-13-2024

/*| ===================================================================================================
  | This code is the main driver for our project. It creates a web server connection that allows
  | the user to control the RGB matrix panel through a web interface. The user can select from a
  | variety of animations to display on the panel. The program also includes a few animations that
  | can be run without the web interface. The program is designed to be run on an Adafruit Metro M4
  | Airlift Lite board with a 32x32 RGB matrix panel availible on sparkfruit. The backup folder of this
  | project contains the original code that was run on an Arduino Uno without wifi capabilties.
  | ===================================================================================================
  |               _      ___    _     _____ 
  |              /_\    / __\  /_\    \_   \
  |             //_\\  / /    //_\\    / /\/
  |            /  _  \/ /___ /  _  \/\/ /_   - Alex Mackimmie, Cole Vanderlaan, Andrew Gibson, Ian Finnigan
  |            \_/ \_/\____/ \_/ \_/\____/   - Last Updated 11-13-2024
  |
  | ===================================================================================================
*/

// Include the RGB Matrix Panel Library
#include <RGBmatrixPanel.h>
#include <WiFiNINA.h>
#include <SPI.h>
#include "frames.h"

// Define the RGB Matrix Panel Pins
#define CLK A4
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3

// RGB Matrix Panel Global Variable
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);

// Function Prototypes
void discBounce();
void circleBounce();
void discBounceStep();
void circleBounceStep();
void cubeUpdate();
void startup();

// Define buffer sizes
#define HEADER_BUFFER_SIZE 512
#define LINE_BUFFER_SIZE 128
#define STATUS_BUFFER_SIZE 64

// Replace with your network credentials
const char* ssid = "Alex's iPhone";
const char* password = "gooberville";
int keyIndex = 0; // your network key index
int status = WL_IDLE_STATUS; // the WiFi status

// Create a WiFi server on port 80
WiFiServer server(80);

// Global variables
char header[HEADER_BUFFER_SIZE] = {0};
char currentLine[LINE_BUFFER_SIZE] = {0};
char statusMessage[STATUS_BUFFER_SIZE] = "Ready";
char currentFunction[16] = "none";

// Indices for buffers
int headerIndex = 0;
int currentLineIndex = 0;

// Create the client
WiFiClient client;

// Variables for non-blocking animations
unsigned long previousAnimationTime = 0;
const long animationInterval = 20; // Adjust as needed
int currentFrame = 0;

// Code to run on startup of the system
void setup() {
  Serial.begin(9600);
  //while (!Serial) {
  //  ; // wait for serial port to connect. Needed for native USB port only
  //}

  // Connect to Wi-Fi
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  // Start the server
  server.begin();

  matrix.begin();
  startup();
}

// MAIN PROGRAM LOOP
void loop() {
  // Handle Wi-Fi reconnection
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println(F("WiFi disconnected. Attempting reconnection..."));
    WiFi.begin(ssid, password);
    delay(1000); // Small delay to allow reconnection
    return; // Skip rest of loop to allow reconnection
  }

  // Non-blocking client handling
  WiFiClient client = server.available();

  if (client) {
    Serial.println(F("New Client."));
    memset(header, 0, HEADER_BUFFER_SIZE);
    headerIndex = 0;
    memset(currentLine, 0, LINE_BUFFER_SIZE);
    currentLineIndex = 0;

    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.write(c);

        // Store header with bounds checking
        if (headerIndex < HEADER_BUFFER_SIZE - 1) {
          header[headerIndex++] = c;
          header[headerIndex] = '\0';
        }

        // Handle end of line
        if (c == '\n') {
          if (currentLineIndex == 0) {
            // Check for specific GET requests
            if (strncmp(header, "GET /status", 11) == 0) {
              // Serve the status message
              client.println(F("HTTP/1.1 200 OK"));
              client.println(F("Content-Type: text/plain"));
              client.println(F("Connection: close"));
              client.println();
              client.print(statusMessage);
            } else {
              // Send HTTP response
              client.println(F("HTTP/1.1 200 OK"));
              client.println(F("Content-type:text/html"));
              client.println(F("Connection: close"));
              client.println();

              // Display the improved HTML web page using F() macro
              client.println(F("<!DOCTYPE html><html>"));
              client.println(F("<head>"));
              client.println(F("<title>Control Panel</title>"));
              client.println(F("<style>"));
              client.println(F("body { font-family: Arial, sans-serif; text-align: center; background-color: #f0f0f0; }"));
              client.println(F("h1 { color: #333; }"));
              client.println(F(".button {"));
              client.println(F("  display: inline-block;"));
              client.println(F("  padding: 15px 30px;"));
              client.println(F("  margin: 10px;"));
              client.println(F("  font-size: 18px;"));
              client.println(F("  color: #fff;"));
              client.println(F("  background-color: #007BFF;"));
              client.println(F("  border: none;"));
              client.println(F("  border-radius: 5px;"));
              client.println(F("  cursor: pointer;"));
              client.println(F("}"));
              client.println(F(".button:hover { background-color: #0056b3; }"));
              client.println(F("#terminal {"));
              client.println(F("  width: 80%;"));
              client.println(F("  height: 150px;"));
              client.println(F("  margin: 20px auto;"));
              client.println(F("  padding: 10px;"));
              client.println(F("  background-color: #000;"));
              client.println(F("  color: #0f0;"));
              client.println(F("  font-family: monospace;"));
              client.println(F("  overflow-y: scroll;"));
              client.println(F("  border-radius: 5px;"));
              client.println(F("}"));
              client.println(F("</style>"));
              client.println(F("</head>"));
              client.println(F("<body>"));
              client.println(F("<h1>Control Panel</h1>"));
              client.println(F("<button class=\"button\" onclick=\"location.href='/discBounce'\">Disc Bounce</button>"));
              client.println(F("<button class=\"button\" onclick=\"location.href='/circleBounce'\">Circle Bounce</button>"));
              client.println(F("<button class=\"button\" onclick=\"location.href='/cubeUpdate'\">Cube Update</button>"));
              client.println(F("<button class=\"button\" onclick=\"location.href='/stop'\">Stop</button>"));
              client.println(F("<div id=\"terminal\"></div>"));
              client.println(F("<script>"));
              client.println(F("setInterval(function() {"));
              client.println(F("  fetch('/status')"));
              client.println(F("    .then(response => response.text())"));
              client.println(F("    .then(data => {"));
              client.println(F("      document.getElementById('terminal').innerText = data;"));
              client.println(F("    });"));
              client.println(F("}, 1000);"));
              client.println(F("</script>"));
              client.println(F("</body></html>"));
              client.println();
            }
            break;
          } else {
            // Clear current line
            memset(currentLine, 0, LINE_BUFFER_SIZE);
            currentLineIndex = 0;
          }
        } else if (c != '\r') {
          // Store current line with bounds checking
          if (currentLineIndex < LINE_BUFFER_SIZE - 1) {
            currentLine[currentLineIndex++] = c;
            currentLine[currentLineIndex] = '\0';
          }
        }

        // Check for GET requests in header
        if (strstr(header, "GET /discBounce") != NULL) {
          strncpy(currentFunction, "discBounce", sizeof(currentFunction) - 1);
          strncpy(statusMessage, "Running discBounce animation", STATUS_BUFFER_SIZE - 1);
        } else if (strstr(header, "GET /circleBounce") != NULL) {
          strncpy(currentFunction, "circleBounce", sizeof(currentFunction) - 1);
          strncpy(statusMessage, "Running circleBounce animation", STATUS_BUFFER_SIZE - 1);
        } else if (strstr(header, "GET /cubeUpdate") != NULL) {
          strncpy(currentFunction, "cubeUpdate", sizeof(currentFunction) - 1);
          strncpy(statusMessage, "Running cubeUpdate animation", STATUS_BUFFER_SIZE - 1);
        } else if (strstr(header, "GET /stop") != NULL) {
          strncpy(currentFunction, "stop", sizeof(currentFunction) - 1);
          strncpy(statusMessage, "Stopped animations", STATUS_BUFFER_SIZE - 1);
        }
      }
    }
    client.stop();
    Serial.println(F("Client disconnected."));
    Serial.println();
  }

  if (millis() - previousAnimationTime >= animationInterval) {
    previousAnimationTime = millis();
    if (strcmp(currentFunction, "discBounce") == 0) {
      discBounceStep();
    } else if (strcmp(currentFunction, "circleBounce") == 0) {
      circleBounceStep();
    } else if (strcmp(currentFunction, "cubeUpdate") == 0) {
      cubeUpdate();
    } else if (strcmp(currentFunction, "stop") == 0) {
      matrix.fillScreen(matrix.Color333(0, 0, 0)); // Clear screen
    }
  }
}

// Startup Animation
void startup() {

  // Fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));

  // Draw some text!
  matrix.setCursor(4, 8);    // start at top left, with one pixel of spacing
  matrix.setTextSize(1);     // size 1 == 8 pixels high
  matrix.setTextWrap(true); // Wrap at end of line

  matrix.println("OOP!"); // print the letters A, C, A, I, A, C, A, I, A, C
  delay(1000);

  matrix.fillScreen(matrix.Color333(0, 0, 0));  // fill the screen with 'black'
  matrix.setCursor(1, 0);    // start at top left, with one pixel of spacing

  // Print the letters A, C, A, I

  for (int i = 0; i < 2; i++){
    // Print each letter with a rainbow color
    matrix.setTextColor(matrix.Color333(7,0,0));
    matrix.print('A');
    delay(100);
    matrix.setTextColor(matrix.Color333(7,4,0));
    matrix.print('C');
    delay(100);
    matrix.setTextColor(matrix.Color333(7,7,0));
    matrix.print('A');
    delay(100);
    matrix.setTextColor(matrix.Color333(4,7,0));
    matrix.print('I');
    delay(100);
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('A');
    delay(100);
    matrix.setTextColor(matrix.Color333(0,7,7));
    matrix.print('C');
    delay(100);
    matrix.setTextColor(matrix.Color333(0,4,7));
    matrix.print('A');
    delay(100);
    matrix.setTextColor(matrix.Color333(0,0,7));
    matrix.print('I');
    delay(100);
    matrix.setTextColor(matrix.Color333(4,0,7));
    matrix.print('A');
    delay(100);
    matrix.setTextColor(matrix.Color333(7,0,4));
    matrix.print('C');
    delay(100);
  }
  matrix.fillScreen(matrix.Color333(0, 0, 0));
}

// Bounce the disc - Deprecated with web server implementation
void discBounce(){
  // THE DISC THE DISC THE DISC THE DISC

  // MOVNG DOWN
  for(int row=0; row<27; row++){
    matrix.fillRect(0, row, 32, 5, matrix.Color333(7, 0, 7));
    //delay(500);
    matrix.fillRect(0, row, 32, 1, matrix.Color333(0, 0, 0));
    //delay(500);
  }

  // MOVING UP
  for(int row=27; row>0; row--){
    matrix.fillRect(0, row, 32, 5, matrix.Color333(7, 0, 7));
    //delay(500);
    matrix.fillRect(0, row+4, 32, 1, matrix.Color333(0, 0, 0));
    //delay(500);
  }
}

// Bounce the sphere - Depricated with web server implementation
void circleBounce(){
  // THE SPHERE THE SPHERE THE SPHERE

  // MOVNG DOWN
  for(int row=0; row<30; row++){
    matrix.fillCircle(15, row, 5, matrix.Color333(0, 7, 0));
    //delay(500);
    matrix.drawCircle(15, row, 5, matrix.Color333(0, 0, 0));
    //delay(500);
  }

  // MOVING UP
  for(int row=30; row>0; row--){
    matrix.fillCircle(15, row, 5, matrix.Color333(0, 7, 0));
    //delay(500);
    matrix.drawCircle(15, row, 5, matrix.Color333(0, 0, 0));
    //delay(500);
  }
}

// Non-blocking disc bounce animation
void discBounceStep() {
  static int row = 0;
  static int direction = 1;

  matrix.fillRect(0, row, 32, 5, matrix.Color333(7, 0, 7));
  if (direction == 1 && row > 0) {
    matrix.fillRect(0, row - 1, 32, 1, matrix.Color333(0, 0, 0));
  } else if (direction == -1 && row < 27) {
    matrix.fillRect(0, row + 5, 32, 1, matrix.Color333(0, 0, 0));
  }

  row += direction;
  if (row >= 27) direction = -1;
  if (row <= 0) direction = 1;
}

// Non-blocking circle bounce animation
void circleBounceStep() {
  static int row = 0;
  static int direction = 1;

  matrix.fillCircle(15, row, 5, matrix.Color333(0, 7, 0));
  if (direction == 1 && row > 0) {
    matrix.drawCircle(15, row - 1, 5, matrix.Color333(0, 0, 0));
  } else if (direction == -1 && row < 30) {
    matrix.drawCircle(15, row + 1, 5, matrix.Color333(0, 0, 0));
  }

  row += direction;
  if (row >= 30) direction = -1;
  if (row <= 0) direction = 1;
}

// Function to update the cube animation in a non-blocking manner
void cubeUpdate() {
    unsigned long currentMillis = millis();
    if (currentMillis - previousAnimationTime >= animationInterval) {
        previousAnimationTime = currentMillis;

        // Call the current frame function
        switch (currentFrame) {
            case 0:
                frame0(matrix);
                break;
            case 1:
                frame1(matrix);
                break;
            case 2:
                frame2(matrix);
                break;
            case 3:
                frame3(matrix);
                break;
            case 4:
                frame4(matrix);
                break;
            case 5:
                frame5(matrix);
                break;
            case 6:
                frame6(matrix);
                break;
            case 7:
                frame7(matrix);
                break;
            case 8:
                frame8(matrix);
                break;
            case 9:
                frame9(matrix);
                break;
            case 10:
                frame10(matrix);
                break;
            case 11:
                frame11(matrix);
                break;
            case 12:
                frame12(matrix);
                break;
            case 13:
                frame13(matrix);
                break;
            case 14:
                frame14(matrix);
                break;
            case 15:
                frame15(matrix);
                break;
            case 16:
                frame16(matrix);
                break;
            case 17:
                frame17(matrix);
                break;
            case 18:
                frame18(matrix);
                break;
            case 19:
                frame19(matrix);
                break;
            case 20:
                frame20(matrix);
                break;
            default:
                currentFrame = -1;
                break;
        }
        currentFrame++;
        if (currentFrame > 20) {
            currentFrame = 0;
        }
    }
}