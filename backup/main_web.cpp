// Main RGB Matrix Animation | Alex Mackimmie & Cole Vanderlaan | Last Updated 2024-10-24

// Include the RGB Matrix Panel Library
#include <RGBmatrixPanel.h>
#include <WiFiNINA.h>
#include <SPI.h>

// Define the RGB Matrix Panel Pins
#define CLK 11
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3

// RGB Matrix Panel Global Variable
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);

// Function Prototypes
void startup();
void discBounce();
void circleBounce();
void rainbowAnimation();

// Replace with your network credentials
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";
int keyIndex = 0; // your network key index
int status = WL_IDLE_STATUS; // the WiFi status

// Create a WiFi server on port 80
WiFiServer server(80);

// Global variables
String header;
String currentFunction = "none";

// Code to run on startup of the system
void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

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

void loop() {
  WiFiClient client = server.available();   // Listen for incoming clients

  if (client) {                             // If a new client connects,
    Serial.println("New Client.");          // print a message out in the serial port
    String currentLine = "";                // make a String to hold incoming data from the client
    while (client.connected()) {            // loop while the client's connected
      if (client.available()) {             // if there's bytes to read from the client,
        char c = client.read();             // read a byte, then
        Serial.write(c);                    // print it out the serial monitor
        header += c;
        if (c == '\n') {                    // if the byte is a newline character
          if (currentLine.length() == 0) {
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println();

            // Display the HTML web page
            client.println("<!DOCTYPE html><html>");
            client.println("<head><title>Control Panel</title></head>");
            client.println("<body><h1>Control Panel</h1>");
            client.println("<button onclick=\"location.href='/discBounce'\" type='button'>Disc Bounce</button>");
            client.println("<button onclick=\"location.href='/circleBounce'\" type='button'>Circle Bounce</button>");
            client.println("<button onclick=\"location.href='/stop'\" type='button'>Stop</button>");
            client.println("</body></html>");

            client.println();
            break;
          } else {
            currentLine = "";
          }
        } else if (c != '\r') {
          currentLine += c;
        }

        if (header.indexOf("GET /discBounce") >= 0) {
          currentFunction = "discBounce";
        } else if (header.indexOf("GET /circleBounce") >= 0) {
          currentFunction = "circleBounce";
        } else if (header.indexOf("GET /stop") >= 0) {
          currentFunction = "stop";
        }
      }
    }
    header = "";
    client.stop();
    Serial.println("Client disconnected.");
    Serial.println("");
  }

  if (currentFunction == "discBounce") {
    discBounce();
  } else if (currentFunction == "circleBounce") {
    circleBounce();
  } else if (currentFunction == "stop") {
    matrix.fillScreen(matrix.Color333(0, 0, 0));  // fill the screen with 'black'
  }
}

// Startup ANIMATION!
void startup() {

  // Fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));

  // Draw some text!
  matrix.setCursor(4, 8);    // start at top left, with one pixel of spacing
  matrix.setTextSize(1);     // size 1 == 8 pixels high
  matrix.setTextWrap(true); // Don't wrap at end of line - will do ourselves

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

}

// Bounce the disc
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

// Bounce the sphere
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

void rainbowAnimation() {
    for (int i = 0; i < 256; i++) {
        // Calculate color components using sine wave for smooth transition
        uint8_t red = (sin(i * 0.1) * 127 + 128) / 32;
        uint8_t green = (sin(i * 0.1 + 2) * 127 + 128) / 32;
        uint8_t blue = (sin(i * 0.1 + 4) * 127 + 128) / 32;

        // Set text color
        matrix.setTextColor(matrix.Color333(red, green, blue));

        // Clear the display
        matrix.fillScreen(matrix.Color333(0, 0, 0));

        // Print a moving pattern
        for (int x = 0; x < 32; x++) {
            for (int y = 0; y < 32; y++) {
                if ((x + y + i) % 2 == 0) {
                    matrix.drawPixel(x, y, matrix.Color333(red, green, blue));
                }
            }
        }

        // Delay to create animation effect
        delay(50);
    }
}