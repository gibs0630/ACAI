// Main RGB Matrix Animation | Alex Mackimmie & Cole VanderGAMING | Last Updated 2024-09-18

#include <RGBmatrixPanel.h>

#define CLK 11
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3

RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);

void startup();

void setup() {

  matrix.begin();

  startup();

}

void loop() {
  // THE DISC THE DISC THE DISC THE DISC

  // Moving DOWN
  for(int row=0; row<30; row++){
    matrix.fillRect(0, row, 32, 4, matrix.Color333(0, 7, 0));
    //delay(500);
    matrix.fillRect(0, row, 32, 1, matrix.Color333(0, 0, 0));
    //delay(500);
  }

  // MOVING UP
  for(int row=30; row>0; row--){
    matrix.fillRect(0, row, 32, 4, matrix.Color333(0, 7, 0));
    //delay(500);
    matrix.fillRect(0, row+3, 32, 1, matrix.Color333(0, 0, 0));
    //delay(500);
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
