// Main RGB Matrix Animation | Alex Mackimmie & Cole VanderGAMING | Last Updated 2024-09-18

// Include the RGB Matrix Panel Library
#include <RGBmatrixPanel.h>

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

// Code to run on startup of the system
void setup() {

  matrix.begin();

  startup();

}

// Code to run in a loop once startup has included
void loop() {
  // Time for some animations!
  // Bounce the disc
  for (int i = 0; i < 7; i++) {
    discBounce();
  }
  matrix.fillScreen(matrix.Color333(0, 0, 0));  // fill the screen with 'black'
  for (int i = 0; i < 10; i++) {
    circleBounce();
  }
  //rainbowAnimation();

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
    matrix.fillRect(0, row, 31, 5, matrix.Color333(7, 0, 7));
    //delay(500);
    matrix.fillRect(0, row, 31, 1, matrix.Color333(0, 0, 0));
    //delay(500);
  }

  // MOVING UP
  for(int row=27; row>0; row--){
    matrix.fillRect(0, row, 31, 5, matrix.Color333(7, 0, 7));
    //delay(500);
    matrix.fillRect(0, row+4, 31, 1, matrix.Color333(0, 0, 0));
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