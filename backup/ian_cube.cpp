// Main RGB Matrix Animation | Ian Made This! Alex added a little... | Last Updated 11-12-2024

// Include the RGB Matrix Panel Library
#include <RGBmatrixPanel.h>
//#include "frames.h"

// Define the RGB Matrix Panel Pins
#define CLK A4
#define OE   9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3

//using namespace N;

// RGB Matrix Panel Global Variable
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);

void startup();
// void f3Init();
void cube();
void startup();
void frame0();
void frame1();
void frame2();
void frame3();
void frame4();
void frame5();
void frame6();
void frame7();
void frame8();
void frame9();
void frame10();
void frame11();
void frame12();
void frame13();
void frame14();
void frame15();
void frame16();
void frame17();
void frame18();
void frame19();
void frame20();

const int fd = 20; //1 ms between frame


// Code to run on startup of the system
void setup() {

  matrix.begin();
  startup();

  //f3Init();

}

// Code to run in a loop once startup has included
void loop() {

  cube();
}

void cube(){
  frame0();
  delay(fd);
  frame1();
  delay(fd);
  frame2();
  delay(fd);
  frame3();
  delay(fd);
  frame4();
  delay(fd);
  frame5();
  delay(fd);
  frame6();
  delay(fd);
  frame7();
  delay(fd);
  frame8();
  delay(fd);
  frame9();
  delay(fd);
  frame10();
  delay(fd);
  frame11();
  delay(fd);
  frame12();
  delay(fd);
  frame13();
  delay(fd);
  frame14();
  delay(fd);
  frame15();
  delay(fd);
  frame16();
  delay(fd);
  frame17();
  delay(fd);
  frame18();
  delay(fd);
  frame19();
  delay(fd);
  frame20();
  delay(fd);
}

void frame0(){
matrix.drawPixel(0, 4, matrix.Color888(169,60,44));
matrix.drawPixel(1, 4, matrix.Color888(168,60,44));
matrix.drawPixel(2, 4, matrix.Color888(169,60,44));
matrix.drawPixel(3, 4, matrix.Color888(12,74,193));
matrix.drawPixel(28, 4, matrix.Color888(12,73,193));
matrix.drawPixel(29, 4, matrix.Color888(169,60,44));
matrix.drawPixel(30, 4, matrix.Color888(169,60,44));
matrix.drawPixel(31, 4, matrix.Color888(169,60,44));
matrix.drawPixel(0, 5, matrix.Color888(168,60,44));
matrix.drawPixel(1, 5, matrix.Color888(168,60,44));
matrix.drawPixel(2, 5, matrix.Color888(169,60,44));
matrix.drawPixel(3, 5, matrix.Color888(169,60,44));
matrix.drawPixel(4, 5, matrix.Color888(169,60,44));
matrix.drawPixel(5, 5, matrix.Color888(169,60,44));
matrix.drawPixel(26, 5, matrix.Color888(168,60,44));
matrix.drawPixel(27, 5, matrix.Color888(168,59,44));
matrix.drawPixel(28, 5, matrix.Color888(169,60,44));
matrix.drawPixel(29, 5, matrix.Color888(169,60,45));
matrix.drawPixel(30, 5, matrix.Color888(168,60,44));
matrix.drawPixel(31, 5, matrix.Color888(168,60,44));
matrix.drawPixel(0, 6, matrix.Color888(169,60,44));
matrix.drawPixel(1, 6, matrix.Color888(169,60,44));
matrix.drawPixel(2, 6, matrix.Color888(168,60,44));
matrix.drawPixel(3, 6, matrix.Color888(169,60,44));
matrix.drawPixel(4, 6, matrix.Color888(168,60,44));
matrix.drawPixel(5, 6, matrix.Color888(169,60,44));
matrix.drawPixel(26, 6, matrix.Color888(169,60,44));
matrix.drawPixel(27, 6, matrix.Color888(169,60,44));
matrix.drawPixel(28, 6, matrix.Color888(168,60,44));
matrix.drawPixel(29, 6, matrix.Color888(169,60,44));
matrix.drawPixel(30, 6, matrix.Color888(169,61,45));
matrix.drawPixel(31, 6, matrix.Color888(169,60,44));
matrix.drawPixel(0, 7, matrix.Color888(169,60,45));
matrix.drawPixel(1, 7, matrix.Color888(169,60,44));
matrix.drawPixel(2, 7, matrix.Color888(169,61,45));
matrix.drawPixel(3, 7, matrix.Color888(169,61,45));
matrix.drawPixel(4, 7, matrix.Color888(169,60,44));
matrix.drawPixel(27, 7, matrix.Color888(168,60,44));
matrix.drawPixel(28, 7, matrix.Color888(168,60,44));
matrix.drawPixel(29, 7, matrix.Color888(169,61,45));
matrix.drawPixel(30, 7, matrix.Color888(169,60,44));
matrix.drawPixel(31, 7, matrix.Color888(169,60,44));
matrix.drawPixel(0, 8, matrix.Color888(168,60,44));
matrix.drawPixel(1, 8, matrix.Color888(169,60,44));
matrix.drawPixel(2, 8, matrix.Color888(169,60,44));
matrix.drawPixel(3, 8, matrix.Color888(12,73,193));
matrix.drawPixel(28, 8, matrix.Color888(168,60,44));
matrix.drawPixel(29, 8, matrix.Color888(168,59,43));
matrix.drawPixel(30, 8, matrix.Color888(169,60,44));
matrix.drawPixel(31, 8, matrix.Color888(168,60,44));
matrix.drawPixel(0, 9, matrix.Color888(169,61,45));
matrix.drawPixel(1, 9, matrix.Color888(168,60,44));
matrix.drawPixel(2, 9, matrix.Color888(169,60,44));
matrix.drawPixel(3, 9, matrix.Color888(12,73,192));
matrix.drawPixel(28, 9, matrix.Color888(169,60,44));
matrix.drawPixel(29, 9, matrix.Color888(168,60,44));
matrix.drawPixel(30, 9, matrix.Color888(168,60,44));
matrix.drawPixel(31, 9, matrix.Color888(169,60,44));
matrix.drawPixel(0, 10, matrix.Color888(169,60,44));
matrix.drawPixel(1, 10, matrix.Color888(169,60,44));
matrix.drawPixel(2, 10, matrix.Color888(169,60,44));
matrix.drawPixel(3, 10, matrix.Color888(12,73,193));
matrix.drawPixel(28, 10, matrix.Color888(169,60,44));
matrix.drawPixel(29, 10, matrix.Color888(169,60,44));
matrix.drawPixel(30, 10, matrix.Color888(169,60,44));
matrix.drawPixel(31, 10, matrix.Color888(168,60,44));
matrix.drawPixel(0, 11, matrix.Color888(169,60,44));
matrix.drawPixel(1, 11, matrix.Color888(168,60,44));
matrix.drawPixel(2, 11, matrix.Color888(169,60,44));
matrix.drawPixel(3, 11, matrix.Color888(12,73,192));
matrix.drawPixel(28, 11, matrix.Color888(169,60,44));
matrix.drawPixel(29, 11, matrix.Color888(169,60,44));
matrix.drawPixel(30, 11, matrix.Color888(168,60,44));
matrix.drawPixel(31, 11, matrix.Color888(169,60,44));
matrix.drawPixel(0, 12, matrix.Color888(169,60,45));
matrix.drawPixel(1, 12, matrix.Color888(169,60,44));
matrix.drawPixel(2, 12, matrix.Color888(169,60,44));
matrix.drawPixel(3, 12, matrix.Color888(12,73,193));
matrix.drawPixel(28, 12, matrix.Color888(168,59,43));
matrix.drawPixel(29, 12, matrix.Color888(169,61,45));
matrix.drawPixel(30, 12, matrix.Color888(169,60,44));
matrix.drawPixel(31, 12, matrix.Color888(169,60,44));
matrix.drawPixel(0, 13, matrix.Color888(169,61,45));
matrix.drawPixel(1, 13, matrix.Color888(169,60,44));
matrix.drawPixel(2, 13, matrix.Color888(168,60,44));
matrix.drawPixel(3, 13, matrix.Color888(12,73,192));
matrix.drawPixel(28, 13, matrix.Color888(168,60,44));
matrix.drawPixel(29, 13, matrix.Color888(169,60,44));
matrix.drawPixel(30, 13, matrix.Color888(168,60,44));
matrix.drawPixel(31, 13, matrix.Color888(168,60,44));
matrix.drawPixel(0, 14, matrix.Color888(168,60,44));
matrix.drawPixel(1, 14, matrix.Color888(169,60,44));
matrix.drawPixel(2, 14, matrix.Color888(169,60,44));
matrix.drawPixel(3, 14, matrix.Color888(12,73,192));
matrix.drawPixel(28, 14, matrix.Color888(169,60,44));
matrix.drawPixel(29, 14, matrix.Color888(169,60,44));
matrix.drawPixel(30, 14, matrix.Color888(169,60,45));
matrix.drawPixel(31, 14, matrix.Color888(168,60,44));
matrix.drawPixel(0, 15, matrix.Color888(169,60,44));
matrix.drawPixel(1, 15, matrix.Color888(169,60,45));
matrix.drawPixel(2, 15, matrix.Color888(168,60,44));
matrix.drawPixel(3, 15, matrix.Color888(12,74,193));
matrix.drawPixel(28, 15, matrix.Color888(169,60,44));
matrix.drawPixel(29, 15, matrix.Color888(169,60,44));
matrix.drawPixel(30, 15, matrix.Color888(169,60,44));
matrix.drawPixel(31, 15, matrix.Color888(169,60,44));
matrix.drawPixel(0, 16, matrix.Color888(169,60,44));
matrix.drawPixel(1, 16, matrix.Color888(169,60,44));
matrix.drawPixel(2, 16, matrix.Color888(168,60,44));
matrix.drawPixel(3, 16, matrix.Color888(12,73,192));
matrix.drawPixel(28, 16, matrix.Color888(169,60,44));
matrix.drawPixel(29, 16, matrix.Color888(169,60,44));
matrix.drawPixel(30, 16, matrix.Color888(169,60,45));
matrix.drawPixel(31, 16, matrix.Color888(169,60,44));
matrix.drawPixel(0, 17, matrix.Color888(169,60,44));
matrix.drawPixel(1, 17, matrix.Color888(168,60,44));
matrix.drawPixel(2, 17, matrix.Color888(169,60,44));
matrix.drawPixel(3, 17, matrix.Color888(12,73,193));
matrix.drawPixel(28, 17, matrix.Color888(169,60,44));
matrix.drawPixel(29, 17, matrix.Color888(169,60,44));
matrix.drawPixel(30, 17, matrix.Color888(168,59,44));
matrix.drawPixel(31, 17, matrix.Color888(168,60,44));
matrix.drawPixel(0, 18, matrix.Color888(169,61,45));
matrix.drawPixel(1, 18, matrix.Color888(169,60,44));
matrix.drawPixel(2, 18, matrix.Color888(169,60,44));
matrix.drawPixel(3, 18, matrix.Color888(12,73,193));
matrix.drawPixel(28, 18, matrix.Color888(169,60,44));
matrix.drawPixel(29, 18, matrix.Color888(169,60,44));
matrix.drawPixel(30, 18, matrix.Color888(169,60,44));
matrix.drawPixel(31, 18, matrix.Color888(169,60,44));
matrix.drawPixel(0, 19, matrix.Color888(168,60,44));
matrix.drawPixel(1, 19, matrix.Color888(168,60,44));
matrix.drawPixel(2, 19, matrix.Color888(168,60,44));
matrix.drawPixel(3, 19, matrix.Color888(12,73,192));
matrix.drawPixel(28, 19, matrix.Color888(169,60,44));
matrix.drawPixel(29, 19, matrix.Color888(169,60,44));
matrix.drawPixel(30, 19, matrix.Color888(169,60,45));
matrix.drawPixel(31, 19, matrix.Color888(169,60,44));
matrix.drawPixel(0, 20, matrix.Color888(169,61,45));
matrix.drawPixel(1, 20, matrix.Color888(169,60,44));
matrix.drawPixel(2, 20, matrix.Color888(168,60,44));
matrix.drawPixel(3, 20, matrix.Color888(12,74,193));
matrix.drawPixel(28, 20, matrix.Color888(169,60,44));
matrix.drawPixel(29, 20, matrix.Color888(169,61,45));
matrix.drawPixel(30, 20, matrix.Color888(169,60,45));
matrix.drawPixel(31, 20, matrix.Color888(169,60,44));
matrix.drawPixel(0, 21, matrix.Color888(168,60,44));
matrix.drawPixel(1, 21, matrix.Color888(169,60,44));
matrix.drawPixel(2, 21, matrix.Color888(169,60,44));
matrix.drawPixel(3, 21, matrix.Color888(12,74,193));
matrix.drawPixel(28, 21, matrix.Color888(169,61,45));
matrix.drawPixel(29, 21, matrix.Color888(168,60,44));
matrix.drawPixel(30, 21, matrix.Color888(169,60,45));
matrix.drawPixel(31, 21, matrix.Color888(169,61,45));
matrix.drawPixel(0, 22, matrix.Color888(169,60,44));
matrix.drawPixel(1, 22, matrix.Color888(169,60,44));
matrix.drawPixel(2, 22, matrix.Color888(168,60,44));
matrix.drawPixel(3, 22, matrix.Color888(12,74,193));
matrix.drawPixel(28, 22, matrix.Color888(169,60,44));
matrix.drawPixel(29, 22, matrix.Color888(168,60,44));
matrix.drawPixel(30, 22, matrix.Color888(169,60,45));
matrix.drawPixel(31, 22, matrix.Color888(169,60,44));
matrix.drawPixel(0, 23, matrix.Color888(169,60,44));
matrix.drawPixel(1, 23, matrix.Color888(168,60,44));
matrix.drawPixel(2, 23, matrix.Color888(168,60,44));
matrix.drawPixel(3, 23, matrix.Color888(168,60,44));
matrix.drawPixel(4, 23, matrix.Color888(169,60,44));
matrix.drawPixel(26, 23, matrix.Color888(12,74,193));
matrix.drawPixel(27, 23, matrix.Color888(169,60,44));
matrix.drawPixel(28, 23, matrix.Color888(169,60,44));
matrix.drawPixel(29, 23, matrix.Color888(169,60,44));
matrix.drawPixel(30, 23, matrix.Color888(169,60,44));
matrix.drawPixel(31, 23, matrix.Color888(169,60,44));
matrix.drawPixel(0, 24, matrix.Color888(169,60,44));
matrix.drawPixel(1, 24, matrix.Color888(168,60,44));
matrix.drawPixel(2, 24, matrix.Color888(169,61,45));
matrix.drawPixel(3, 24, matrix.Color888(168,60,44));
matrix.drawPixel(4, 24, matrix.Color888(169,60,44));
matrix.drawPixel(5, 24, matrix.Color888(169,60,44));
matrix.drawPixel(26, 24, matrix.Color888(169,60,44));
matrix.drawPixel(27, 24, matrix.Color888(169,60,44));
matrix.drawPixel(28, 24, matrix.Color888(168,60,44));
matrix.drawPixel(29, 24, matrix.Color888(168,60,44));
matrix.drawPixel(30, 24, matrix.Color888(169,60,44));
matrix.drawPixel(31, 24, matrix.Color888(169,60,44));
matrix.drawPixel(0, 25, matrix.Color888(169,60,44));
matrix.drawPixel(1, 25, matrix.Color888(169,60,44));
matrix.drawPixel(2, 25, matrix.Color888(169,60,44));
matrix.drawPixel(3, 25, matrix.Color888(169,60,44));
matrix.drawPixel(4, 25, matrix.Color888(169,60,44));
matrix.drawPixel(5, 25, matrix.Color888(12,74,193));
matrix.drawPixel(26, 25, matrix.Color888(169,60,45));
matrix.drawPixel(27, 25, matrix.Color888(169,60,44));
matrix.drawPixel(28, 25, matrix.Color888(168,60,44));
matrix.drawPixel(29, 25, matrix.Color888(169,60,44));
matrix.drawPixel(30, 25, matrix.Color888(169,60,44));
matrix.drawPixel(31, 25, matrix.Color888(169,61,45));
matrix.drawPixel(0, 26, matrix.Color888(169,60,44));
matrix.drawPixel(1, 26, matrix.Color888(12,74,193));
matrix.drawPixel(29, 26, matrix.Color888(12,73,193));
matrix.drawPixel(30, 26, matrix.Color888(169,60,44));
matrix.drawPixel(31, 26, matrix.Color888(169,61,45));
}

void frame1(){
matrix.drawPixel(3, 4, matrix.Color888(169,60,44));
matrix.drawPixel(4, 4, matrix.Color888(12,73,192));
matrix.drawPixel(27, 4, matrix.Color888(12,74,193));
matrix.drawPixel(28, 4, matrix.Color888(169,60,44));
matrix.drawPixel(0, 5, matrix.Color888(12,73,192));
matrix.drawPixel(6, 5, matrix.Color888(12,73,192));
matrix.drawPixel(25, 5, matrix.Color888(169,60,44));
matrix.drawPixel(0, 6, matrix.Color888(3,3,3));
matrix.drawPixel(6, 6, matrix.Color888(11,73,192));
matrix.drawPixel(25, 6, matrix.Color888(12,74,193));
matrix.drawPixel(31, 6, matrix.Color888(3,3,3));
matrix.drawPixel(0, 7, matrix.Color888(3,3,3));
matrix.drawPixel(1, 7, matrix.Color888(12,73,193));
matrix.drawPixel(5, 7, matrix.Color888(12,73,193));
matrix.drawPixel(26, 7, matrix.Color888(12,74,193));
matrix.drawPixel(31, 7, matrix.Color888(3,3,3));
matrix.drawPixel(0, 8, matrix.Color888(3,3,3));
matrix.drawPixel(1, 8, matrix.Color888(3,3,3));
matrix.drawPixel(3, 8, matrix.Color888(169,60,44));
matrix.drawPixel(30, 8, matrix.Color888(3,3,3));
matrix.drawPixel(31, 8, matrix.Color888(2,2,2));
matrix.drawPixel(0, 9, matrix.Color888(4,4,4));
matrix.drawPixel(1, 9, matrix.Color888(3,3,3));
matrix.drawPixel(3, 9, matrix.Color888(3,3,3));
matrix.drawPixel(28, 9, matrix.Color888(12,73,193));
matrix.drawPixel(30, 9, matrix.Color888(3,3,3));
matrix.drawPixel(31, 9, matrix.Color888(3,3,3));
matrix.drawPixel(0, 10, matrix.Color888(3,3,3));
matrix.drawPixel(1, 10, matrix.Color888(3,3,3));
matrix.drawPixel(3, 10, matrix.Color888(3,3,3));
matrix.drawPixel(28, 10, matrix.Color888(12,73,193));
matrix.drawPixel(30, 10, matrix.Color888(3,3,3));
matrix.drawPixel(31, 10, matrix.Color888(3,3,3));
matrix.drawPixel(0, 11, matrix.Color888(3,3,3));
matrix.drawPixel(1, 11, matrix.Color888(3,3,3));
matrix.drawPixel(3, 11, matrix.Color888(3,3,3));
matrix.drawPixel(28, 11, matrix.Color888(12,73,193));
matrix.drawPixel(30, 11, matrix.Color888(3,3,3));
matrix.drawPixel(31, 11, matrix.Color888(3,3,3));
matrix.drawPixel(0, 12, matrix.Color888(3,3,3));
matrix.drawPixel(1, 12, matrix.Color888(3,3,3));
matrix.drawPixel(3, 12, matrix.Color888(3,3,3));
matrix.drawPixel(28, 12, matrix.Color888(11,73,192));
matrix.drawPixel(30, 12, matrix.Color888(3,3,3));
matrix.drawPixel(31, 12, matrix.Color888(3,3,3));
matrix.drawPixel(0, 13, matrix.Color888(4,4,4));
matrix.drawPixel(1, 13, matrix.Color888(3,3,3));
matrix.drawPixel(3, 13, matrix.Color888(3,3,3));
matrix.drawPixel(28, 13, matrix.Color888(12,73,192));
matrix.drawPixel(30, 13, matrix.Color888(3,3,3));
matrix.drawPixel(31, 13, matrix.Color888(3,3,3));
matrix.drawPixel(0, 14, matrix.Color888(3,3,3));
matrix.drawPixel(1, 14, matrix.Color888(3,3,3));
matrix.drawPixel(3, 14, matrix.Color888(3,3,3));
matrix.drawPixel(28, 14, matrix.Color888(12,74,193));
matrix.drawPixel(30, 14, matrix.Color888(3,3,3));
matrix.drawPixel(31, 14, matrix.Color888(3,3,3));
matrix.drawPixel(0, 15, matrix.Color888(3,3,3));
matrix.drawPixel(1, 15, matrix.Color888(3,3,3));
matrix.drawPixel(3, 15, matrix.Color888(3,3,3));
matrix.drawPixel(28, 15, matrix.Color888(12,73,193));
matrix.drawPixel(30, 15, matrix.Color888(3,3,3));
matrix.drawPixel(31, 15, matrix.Color888(3,3,3));
matrix.drawPixel(0, 16, matrix.Color888(3,3,3));
matrix.drawPixel(1, 16, matrix.Color888(3,3,3));
matrix.drawPixel(3, 16, matrix.Color888(3,3,3));
matrix.drawPixel(28, 16, matrix.Color888(12,74,193));
matrix.drawPixel(30, 16, matrix.Color888(3,3,3));
matrix.drawPixel(31, 16, matrix.Color888(3,3,3));
matrix.drawPixel(0, 17, matrix.Color888(3,3,3));
matrix.drawPixel(1, 17, matrix.Color888(3,3,3));
matrix.drawPixel(3, 17, matrix.Color888(3,3,3));
matrix.drawPixel(28, 17, matrix.Color888(12,73,193));
matrix.drawPixel(30, 17, matrix.Color888(2,2,2));
matrix.drawPixel(31, 17, matrix.Color888(3,3,3));
matrix.drawPixel(0, 18, matrix.Color888(4,4,4));
matrix.drawPixel(1, 18, matrix.Color888(3,3,3));
matrix.drawPixel(3, 18, matrix.Color888(3,3,3));
matrix.drawPixel(28, 18, matrix.Color888(3,3,3));
matrix.drawPixel(30, 18, matrix.Color888(3,3,3));
matrix.drawPixel(31, 18, matrix.Color888(3,3,3));
matrix.drawPixel(0, 19, matrix.Color888(3,3,3));
matrix.drawPixel(1, 19, matrix.Color888(3,3,3));
matrix.drawPixel(3, 19, matrix.Color888(3,3,3));
matrix.drawPixel(28, 19, matrix.Color888(3,3,3));
matrix.drawPixel(30, 19, matrix.Color888(3,3,3));
matrix.drawPixel(31, 19, matrix.Color888(3,3,3));
matrix.drawPixel(0, 20, matrix.Color888(3,3,3));
matrix.drawPixel(1, 20, matrix.Color888(3,3,3));
matrix.drawPixel(3, 20, matrix.Color888(3,3,3));
matrix.drawPixel(28, 20, matrix.Color888(3,3,3));
matrix.drawPixel(30, 20, matrix.Color888(3,3,3));
matrix.drawPixel(31, 20, matrix.Color888(3,3,3));
matrix.drawPixel(0, 21, matrix.Color888(3,3,3));
matrix.drawPixel(1, 21, matrix.Color888(3,3,3));
matrix.drawPixel(3, 21, matrix.Color888(3,3,3));
matrix.drawPixel(28, 21, matrix.Color888(13,74,193));
matrix.drawPixel(30, 21, matrix.Color888(3,3,3));
matrix.drawPixel(31, 21, matrix.Color888(4,4,4));
matrix.drawPixel(0, 22, matrix.Color888(3,3,3));
matrix.drawPixel(1, 22, matrix.Color888(12,73,193));
matrix.drawPixel(3, 22, matrix.Color888(169,60,45));
matrix.drawPixel(27, 22, matrix.Color888(12,73,192));
matrix.drawPixel(30, 22, matrix.Color888(3,3,3));
matrix.drawPixel(31, 22, matrix.Color888(3,3,3));
matrix.drawPixel(0, 23, matrix.Color888(3,3,3));
matrix.drawPixel(5, 23, matrix.Color888(12,74,193));
matrix.drawPixel(26, 23, matrix.Color888(169,60,44));
matrix.drawPixel(30, 23, matrix.Color888(3,3,3));
matrix.drawPixel(31, 23, matrix.Color888(3,3,3));
matrix.drawPixel(0, 24, matrix.Color888(12,73,193));
matrix.drawPixel(6, 24, matrix.Color888(12,73,192));
matrix.drawPixel(25, 24, matrix.Color888(168,59,44));
matrix.drawPixel(31, 24, matrix.Color888(3,3,3));
matrix.drawPixel(5, 25, matrix.Color888(169,60,44));
matrix.drawPixel(25, 25, matrix.Color888(12,74,193));
matrix.drawPixel(31, 25, matrix.Color888(4,4,4));
matrix.drawPixel(0, 26, matrix.Color888(12,73,193));
matrix.drawPixel(1, 26, matrix.Color888(169,60,44));
matrix.drawPixel(2, 26, matrix.Color888(12,73,193));
matrix.drawPixel(28, 26, matrix.Color888(12,74,193));
matrix.drawPixel(29, 26, matrix.Color888(169,60,44));
matrix.drawPixel(31, 26, matrix.Color888(13,74,193));
}

void frame2(){
matrix.drawPixel(0, 4, matrix.Color888(3,3,3));
matrix.drawPixel(4, 4, matrix.Color888(168,60,44));
matrix.drawPixel(27, 4, matrix.Color888(169,60,44));
matrix.drawPixel(31, 4, matrix.Color888(3,3,3));
matrix.drawPixel(0, 5, matrix.Color888(3,3,3));
matrix.drawPixel(1, 5, matrix.Color888(12,73,192));
matrix.drawPixel(6, 5, matrix.Color888(168,60,44));
matrix.drawPixel(31, 5, matrix.Color888(3,3,3));
matrix.drawPixel(1, 6, matrix.Color888(3,3,3));
matrix.drawPixel(6, 6, matrix.Color888(168,60,44));
matrix.drawPixel(25, 6, matrix.Color888(169,60,44));
matrix.drawPixel(30, 6, matrix.Color888(3,3,3));
matrix.drawPixel(1, 7, matrix.Color888(3,3,3));
matrix.drawPixel(2, 7, matrix.Color888(13,74,193));
matrix.drawPixel(5, 7, matrix.Color888(169,60,44));
matrix.drawPixel(26, 7, matrix.Color888(169,60,44));
matrix.drawPixel(30, 7, matrix.Color888(3,3,3));
matrix.drawPixel(2, 8, matrix.Color888(3,3,3));
matrix.drawPixel(3, 8, matrix.Color888(12,73,193));
matrix.drawPixel(4, 8, matrix.Color888(12,73,193));
matrix.drawPixel(27, 8, matrix.Color888(12,73,193));
matrix.drawPixel(29, 8, matrix.Color888(2,2,2));
matrix.drawPixel(2, 9, matrix.Color888(3,3,3));
matrix.drawPixel(28, 9, matrix.Color888(3,3,3));
matrix.drawPixel(29, 9, matrix.Color888(3,3,3));
matrix.drawPixel(2, 10, matrix.Color888(3,3,3));
matrix.drawPixel(28, 10, matrix.Color888(3,3,3));
matrix.drawPixel(29, 10, matrix.Color888(3,3,3));
matrix.drawPixel(2, 11, matrix.Color888(3,3,3));
matrix.drawPixel(28, 11, matrix.Color888(3,3,3));
matrix.drawPixel(29, 11, matrix.Color888(3,3,3));
matrix.drawPixel(2, 12, matrix.Color888(3,3,3));
matrix.drawPixel(28, 12, matrix.Color888(2,2,2));
matrix.drawPixel(29, 12, matrix.Color888(4,4,4));
matrix.drawPixel(2, 13, matrix.Color888(3,3,3));
matrix.drawPixel(28, 13, matrix.Color888(3,3,3));
matrix.drawPixel(29, 13, matrix.Color888(3,3,3));
matrix.drawPixel(2, 14, matrix.Color888(3,3,3));
matrix.drawPixel(28, 14, matrix.Color888(3,3,3));
matrix.drawPixel(29, 14, matrix.Color888(3,3,3));
matrix.drawPixel(2, 15, matrix.Color888(3,3,3));
matrix.drawPixel(28, 15, matrix.Color888(3,3,3));
matrix.drawPixel(29, 15, matrix.Color888(3,3,3));
matrix.drawPixel(2, 16, matrix.Color888(3,3,3));
matrix.drawPixel(28, 16, matrix.Color888(3,3,3));
matrix.drawPixel(29, 16, matrix.Color888(3,3,3));
matrix.drawPixel(2, 17, matrix.Color888(3,3,3));
matrix.drawPixel(28, 17, matrix.Color888(3,3,3));
matrix.drawPixel(29, 17, matrix.Color888(3,3,3));
matrix.drawPixel(2, 18, matrix.Color888(3,3,3));
matrix.drawPixel(29, 18, matrix.Color888(3,3,3));
matrix.drawPixel(2, 19, matrix.Color888(3,3,3));
matrix.drawPixel(29, 19, matrix.Color888(3,3,3));
matrix.drawPixel(2, 20, matrix.Color888(3,3,3));
matrix.drawPixel(29, 20, matrix.Color888(4,4,4));
matrix.drawPixel(2, 21, matrix.Color888(3,3,3));
matrix.drawPixel(28, 21, matrix.Color888(4,4,4));
matrix.drawPixel(29, 21, matrix.Color888(3,3,3));
matrix.drawPixel(1, 22, matrix.Color888(3,3,3));
matrix.drawPixel(4, 22, matrix.Color888(168,60,44));
matrix.drawPixel(27, 22, matrix.Color888(168,60,44));
matrix.drawPixel(29, 22, matrix.Color888(3,3,3));
matrix.drawPixel(1, 23, matrix.Color888(3,3,3));
matrix.drawPixel(5, 23, matrix.Color888(169,60,44));
matrix.drawPixel(25, 23, matrix.Color888(11,73,192));
matrix.drawPixel(29, 23, matrix.Color888(12,74,193));
matrix.drawPixel(0, 24, matrix.Color888(3,3,3));
matrix.drawPixel(1, 24, matrix.Color888(12,73,192));
matrix.drawPixel(6, 24, matrix.Color888(168,60,44));
matrix.drawPixel(30, 24, matrix.Color888(3,3,3));
matrix.drawPixel(0, 25, matrix.Color888(3,3,3));
matrix.drawPixel(6, 25, matrix.Color888(12,74,193));
matrix.drawPixel(25, 25, matrix.Color888(169,61,45));
matrix.drawPixel(30, 25, matrix.Color888(12,74,193));
matrix.drawPixel(0, 26, matrix.Color888(3,3,3));
matrix.drawPixel(1, 26, matrix.Color888(12,74,193));
matrix.drawPixel(2, 26, matrix.Color888(169,60,44));
matrix.drawPixel(3, 26, matrix.Color888(12,74,193));
matrix.drawPixel(28, 26, matrix.Color888(169,60,44));
matrix.drawPixel(31, 26, matrix.Color888(4,4,4));
}

void frame3(){
matrix.drawPixel(1, 4, matrix.Color888(2,2,2));
matrix.drawPixel(5, 4, matrix.Color888(12,73,193));
matrix.drawPixel(26, 4, matrix.Color888(12,73,192));
matrix.drawPixel(30, 4, matrix.Color888(3,3,3));
matrix.drawPixel(1, 5, matrix.Color888(3,3,3));
matrix.drawPixel(7, 5, matrix.Color888(12,73,193));
matrix.drawPixel(24, 5, matrix.Color888(11,73,192));
matrix.drawPixel(30, 5, matrix.Color888(3,3,3));
matrix.drawPixel(2, 6, matrix.Color888(12,73,192));
matrix.drawPixel(24, 6, matrix.Color888(11,73,192));
matrix.drawPixel(2, 7, matrix.Color888(4,4,4));
matrix.drawPixel(6, 7, matrix.Color888(12,73,193));
matrix.drawPixel(25, 7, matrix.Color888(11,73,192));
matrix.drawPixel(29, 7, matrix.Color888(4,4,4));
matrix.drawPixel(3, 8, matrix.Color888(3,3,3));
matrix.drawPixel(27, 8, matrix.Color888(169,60,44));
matrix.drawPixel(2, 22, matrix.Color888(3,3,3));
matrix.drawPixel(5, 22, matrix.Color888(11,73,192));
matrix.drawPixel(26, 22, matrix.Color888(12,73,192));
matrix.drawPixel(28, 22, matrix.Color888(12,73,193));
matrix.drawPixel(2, 23, matrix.Color888(11,73,192));
matrix.drawPixel(6, 23, matrix.Color888(11,73,192));
matrix.drawPixel(25, 23, matrix.Color888(168,59,44));
matrix.drawPixel(29, 23, matrix.Color888(3,3,3));
matrix.drawPixel(1, 24, matrix.Color888(3,3,3));
matrix.drawPixel(24, 24, matrix.Color888(11,73,192));
matrix.drawPixel(29, 24, matrix.Color888(12,73,192));
matrix.drawPixel(1, 25, matrix.Color888(3,3,3));
matrix.drawPixel(6, 25, matrix.Color888(169,61,45));
matrix.drawPixel(30, 25, matrix.Color888(3,3,3));
matrix.drawPixel(1, 26, matrix.Color888(3,3,3));
matrix.drawPixel(27, 26, matrix.Color888(12,73,193));
matrix.drawPixel(30, 26, matrix.Color888(3,3,3));
}

void frame4(){
matrix.drawPixel(5, 4, matrix.Color888(169,60,44));
matrix.drawPixel(2, 5, matrix.Color888(12,73,193));
matrix.drawPixel(7, 5, matrix.Color888(169,60,44));
matrix.drawPixel(24, 5, matrix.Color888(168,59,44));
matrix.drawPixel(2, 6, matrix.Color888(3,3,3));
matrix.drawPixel(7, 6, matrix.Color888(12,73,193));
matrix.drawPixel(29, 6, matrix.Color888(3,3,3));
matrix.drawPixel(3, 7, matrix.Color888(12,74,193));
matrix.drawPixel(6, 7, matrix.Color888(169,60,44));
matrix.drawPixel(25, 7, matrix.Color888(168,60,44));
matrix.drawPixel(26, 8, matrix.Color888(12,73,193));
matrix.drawPixel(28, 8, matrix.Color888(3,3,3));
matrix.drawPixel(3, 22, matrix.Color888(12,74,193));
matrix.drawPixel(5, 22, matrix.Color888(168,60,44));
matrix.drawPixel(26, 22, matrix.Color888(168,60,44));
matrix.drawPixel(28, 22, matrix.Color888(3,3,3));
matrix.drawPixel(2, 23, matrix.Color888(2,2,2));
matrix.drawPixel(6, 23, matrix.Color888(168,60,44));
matrix.drawPixel(28, 23, matrix.Color888(12,73,193));
matrix.drawPixel(2, 24, matrix.Color888(13,74,193));
matrix.drawPixel(7, 24, matrix.Color888(11,73,192));
matrix.drawPixel(24, 24, matrix.Color888(168,59,44));
matrix.drawPixel(29, 24, matrix.Color888(3,3,3));
matrix.drawPixel(24, 25, matrix.Color888(12,74,193));
matrix.drawPixel(29, 25, matrix.Color888(3,3,3));
matrix.drawPixel(2, 26, matrix.Color888(12,73,193));
matrix.drawPixel(3, 26, matrix.Color888(169,60,45));
matrix.drawPixel(4, 26, matrix.Color888(11,73,192));
matrix.drawPixel(27, 26, matrix.Color888(169,60,44));
matrix.drawPixel(29, 26, matrix.Color888(12,73,193));
}

void frame5(){
matrix.drawPixel(2, 4, matrix.Color888(3,3,3));
matrix.drawPixel(6, 4, matrix.Color888(12,73,192));
matrix.drawPixel(29, 4, matrix.Color888(3,3,3));
matrix.drawPixel(2, 5, matrix.Color888(3,3,3));
matrix.drawPixel(29, 5, matrix.Color888(3,3,3));
matrix.drawPixel(3, 6, matrix.Color888(12,73,193));
matrix.drawPixel(7, 6, matrix.Color888(169,60,44));
matrix.drawPixel(24, 6, matrix.Color888(168,59,44));
matrix.drawPixel(3, 7, matrix.Color888(3,3,3));
matrix.drawPixel(28, 7, matrix.Color888(3,3,3));
matrix.drawPixel(5, 8, matrix.Color888(12,74,193));
matrix.drawPixel(26, 8, matrix.Color888(169,60,44));
matrix.drawPixel(3, 22, matrix.Color888(3,3,3));
matrix.drawPixel(27, 22, matrix.Color888(12,73,192));
matrix.drawPixel(3, 23, matrix.Color888(12,73,192));
matrix.drawPixel(24, 23, matrix.Color888(11,73,192));
matrix.drawPixel(28, 23, matrix.Color888(3,3,3));
matrix.drawPixel(2, 24, matrix.Color888(4,4,4));
matrix.drawPixel(7, 24, matrix.Color888(168,59,43));
matrix.drawPixel(28, 24, matrix.Color888(12,73,192));
matrix.drawPixel(2, 25, matrix.Color888(3,3,3));
matrix.drawPixel(7, 25, matrix.Color888(12,73,192));
matrix.drawPixel(24, 25, matrix.Color888(169,60,44));
matrix.drawPixel(2, 26, matrix.Color888(3,3,3));
matrix.drawPixel(26, 26, matrix.Color888(12,73,193));
matrix.drawPixel(29, 26, matrix.Color888(3,3,3));
}

void frame6(){
matrix.drawPixel(26, 4, matrix.Color888(168,60,44));
matrix.drawPixel(3, 6, matrix.Color888(3,3,3));
matrix.drawPixel(28, 6, matrix.Color888(12,73,192));
matrix.drawPixel(24, 7, matrix.Color888(12,74,193));
matrix.drawPixel(4, 8, matrix.Color888(3,3,3));
matrix.drawPixel(27, 8, matrix.Color888(12,73,193));
matrix.drawPixel(6, 22, matrix.Color888(11,73,192));
matrix.drawPixel(25, 22, matrix.Color888(12,74,193));
matrix.drawPixel(27, 22, matrix.Color888(3,3,3));
matrix.drawPixel(3, 23, matrix.Color888(3,3,3));
matrix.drawPixel(7, 23, matrix.Color888(12,74,193));
matrix.drawPixel(28, 24, matrix.Color888(3,3,3));
matrix.drawPixel(7, 25, matrix.Color888(168,60,44));
}

void frame7(){
matrix.drawPixel(25, 4, matrix.Color888(12,73,192));
matrix.drawPixel(3, 5, matrix.Color888(12,73,193));
matrix.drawPixel(28, 6, matrix.Color888(3,3,3));
matrix.drawPixel(25, 8, matrix.Color888(11,73,192));
matrix.drawPixel(27, 8, matrix.Color888(3,3,3));
matrix.drawPixel(4, 22, matrix.Color888(12,73,192));
matrix.drawPixel(24, 23, matrix.Color888(168,60,44));
matrix.drawPixel(3, 24, matrix.Color888(11,73,192));
matrix.drawPixel(28, 25, matrix.Color888(11,73,192));
matrix.drawPixel(3, 26, matrix.Color888(12,74,193));
matrix.drawPixel(4, 26, matrix.Color888(168,59,43));
matrix.drawPixel(26, 26, matrix.Color888(169,60,44));
matrix.drawPixel(28, 26, matrix.Color888(12,74,193));
}

void frame8(){
matrix.drawPixel(25, 4, matrix.Color888(3,3,3));
matrix.drawPixel(28, 4, matrix.Color888(12,73,193));
matrix.drawPixel(23, 5, matrix.Color888(12,73,193));
matrix.drawPixel(28, 5, matrix.Color888(12,73,193));
matrix.drawPixel(24, 7, matrix.Color888(169,61,45));
matrix.drawPixel(6, 22, matrix.Color888(168,59,44));
matrix.drawPixel(7, 23, matrix.Color888(169,60,44));
matrix.drawPixel(27, 23, matrix.Color888(12,73,193));
matrix.drawPixel(3, 24, matrix.Color888(2,2,2));
matrix.drawPixel(28, 25, matrix.Color888(3,3,3));
}

void frame9(){
matrix.drawPixel(6, 4, matrix.Color888(168,60,44));
matrix.drawPixel(23, 6, matrix.Color888(12,73,193));
matrix.drawPixel(27, 7, matrix.Color888(12,73,192));
matrix.drawPixel(23, 24, matrix.Color888(12,74,193));
}

void frame10(){
matrix.drawPixel(23, 5, matrix.Color888(3,3,3));
matrix.drawPixel(28, 5, matrix.Color888(3,3,3));
matrix.drawPixel(24, 23, matrix.Color888(11,73,192));
matrix.drawPixel(27, 23, matrix.Color888(169,60,44));
matrix.drawPixel(23, 24, matrix.Color888(3,3,3));
matrix.drawPixel(28, 25, matrix.Color888(11,73,192));
}

void frame11(){
matrix.drawPixel(3, 5, matrix.Color888(169,60,44));
matrix.drawPixel(28, 5, matrix.Color888(12,73,193));
matrix.drawPixel(27, 7, matrix.Color888(168,60,44));
matrix.drawPixel(28, 25, matrix.Color888(168,60,44));
matrix.drawPixel(4, 26, matrix.Color888(11,73,192));
matrix.drawPixel(28, 26, matrix.Color888(169,60,44));
}

void frame12(){
matrix.drawPixel(6, 4, matrix.Color888(12,73,192));
matrix.drawPixel(26, 4, matrix.Color888(12,73,192));
matrix.drawPixel(28, 4, matrix.Color888(169,60,44));
matrix.drawPixel(28, 5, matrix.Color888(169,60,44));
matrix.drawPixel(3, 6, matrix.Color888(12,73,193));
matrix.drawPixel(23, 6, matrix.Color888(3,3,3));
matrix.drawPixel(24, 7, matrix.Color888(12,74,193));
matrix.drawPixel(4, 8, matrix.Color888(12,73,193));
matrix.drawPixel(4, 22, matrix.Color888(168,60,44));
matrix.drawPixel(25, 22, matrix.Color888(3,3,3));
matrix.drawPixel(27, 22, matrix.Color888(12,73,192));
matrix.drawPixel(24, 23, matrix.Color888(3,3,3));
matrix.drawPixel(3, 24, matrix.Color888(11,73,192));
matrix.drawPixel(28, 24, matrix.Color888(12,73,192));
matrix.drawPixel(7, 25, matrix.Color888(12,73,192));
matrix.drawPixel(3, 26, matrix.Color888(169,60,45));
}

void frame13(){
matrix.drawPixel(2, 4, matrix.Color888(12,73,193));
matrix.drawPixel(3, 6, matrix.Color888(169,60,44));
matrix.drawPixel(7, 6, matrix.Color888(12,73,193));
matrix.drawPixel(28, 6, matrix.Color888(12,73,192));
matrix.drawPixel(3, 7, matrix.Color888(12,74,193));
matrix.drawPixel(6, 7, matrix.Color888(12,73,193));
matrix.drawPixel(5, 8, matrix.Color888(3,3,3));
matrix.drawPixel(25, 8, matrix.Color888(3,3,3));
matrix.drawPixel(27, 8, matrix.Color888(12,73,193));
matrix.drawPixel(6, 22, matrix.Color888(11,73,192));
matrix.drawPixel(27, 22, matrix.Color888(168,60,44));
matrix.drawPixel(3, 23, matrix.Color888(12,73,192));
matrix.drawPixel(7, 23, matrix.Color888(12,74,193));
matrix.drawPixel(3, 24, matrix.Color888(168,60,44));
matrix.drawPixel(28, 24, matrix.Color888(168,60,44));
matrix.drawPixel(26, 26, matrix.Color888(12,73,193));
}

void frame14(){
matrix.drawPixel(2, 4, matrix.Color888(169,60,44));
matrix.drawPixel(26, 4, matrix.Color888(3,3,3));
matrix.drawPixel(29, 4, matrix.Color888(12,74,193));
matrix.drawPixel(2, 5, matrix.Color888(169,60,44));
matrix.drawPixel(29, 5, matrix.Color888(12,74,193));
matrix.drawPixel(7, 6, matrix.Color888(3,3,3));
matrix.drawPixel(28, 6, matrix.Color888(168,60,44));
matrix.drawPixel(3, 7, matrix.Color888(169,61,45));
matrix.drawPixel(6, 7, matrix.Color888(3,3,3));
matrix.drawPixel(24, 7, matrix.Color888(3,3,3));
matrix.drawPixel(28, 7, matrix.Color888(12,73,192));
matrix.drawPixel(27, 8, matrix.Color888(169,60,44));
matrix.drawPixel(6, 22, matrix.Color888(2,2,2));
matrix.drawPixel(26, 22, matrix.Color888(12,73,192));
matrix.drawPixel(3, 23, matrix.Color888(168,60,44));
matrix.drawPixel(7, 23, matrix.Color888(3,3,3));
matrix.drawPixel(28, 23, matrix.Color888(169,60,44));
matrix.drawPixel(2, 25, matrix.Color888(169,60,44));
matrix.drawPixel(7, 25, matrix.Color888(3,3,3));
matrix.drawPixel(29, 25, matrix.Color888(12,74,193));
matrix.drawPixel(2, 26, matrix.Color888(12,73,193));
matrix.drawPixel(3, 26, matrix.Color888(12,74,193));
matrix.drawPixel(4, 26, matrix.Color888(2,2,2));
matrix.drawPixel(29, 26, matrix.Color888(12,73,193));
}

void frame15(){
matrix.drawPixel(2, 3, matrix.Color888(12,73,192));
matrix.drawPixel(1, 4, matrix.Color888(11,73,192));
matrix.drawPixel(6, 4, matrix.Color888(3,3,3));
matrix.drawPixel(27, 4, matrix.Color888(12,74,193));
matrix.drawPixel(29, 4, matrix.Color888(169,60,44));
matrix.drawPixel(7, 5, matrix.Color888(12,73,193));
matrix.drawPixel(24, 5, matrix.Color888(2,2,2));
matrix.drawPixel(29, 5, matrix.Color888(169,60,45));
matrix.drawPixel(2, 6, matrix.Color888(168,60,44));
matrix.drawPixel(29, 6, matrix.Color888(12,74,193));
matrix.drawPixel(28, 7, matrix.Color888(168,60,44));
matrix.drawPixel(3, 8, matrix.Color888(12,73,193));
matrix.drawPixel(26, 8, matrix.Color888(12,73,193));
matrix.drawPixel(28, 8, matrix.Color888(12,73,192));
matrix.drawPixel(3, 22, matrix.Color888(169,60,45));
matrix.drawPixel(26, 22, matrix.Color888(3,3,3));
matrix.drawPixel(28, 22, matrix.Color888(169,60,44));
matrix.drawPixel(25, 23, matrix.Color888(11,73,192));
matrix.drawPixel(2, 24, matrix.Color888(169,61,45));
matrix.drawPixel(7, 24, matrix.Color888(11,73,192));
matrix.drawPixel(24, 24, matrix.Color888(2,2,2));
matrix.drawPixel(29, 24, matrix.Color888(168,60,44));
matrix.drawPixel(24, 25, matrix.Color888(12,74,193));
matrix.drawPixel(29, 25, matrix.Color888(169,60,44));
matrix.drawPixel(2, 26, matrix.Color888(169,60,44));
matrix.drawPixel(26, 26, matrix.Color888(3,3,3));
matrix.drawPixel(29, 26, matrix.Color888(169,60,44));
}

void frame16(){
matrix.drawPixel(1, 4, matrix.Color888(168,60,44));
matrix.drawPixel(5, 4, matrix.Color888(12,73,193));
matrix.drawPixel(27, 4, matrix.Color888(3,3,3));
matrix.drawPixel(30, 4, matrix.Color888(169,60,44));
matrix.drawPixel(1, 5, matrix.Color888(168,60,44));
matrix.drawPixel(7, 5, matrix.Color888(3,3,3));
matrix.drawPixel(30, 5, matrix.Color888(11,73,192));
matrix.drawPixel(1, 6, matrix.Color888(12,73,193));
matrix.drawPixel(6, 6, matrix.Color888(11,73,192));
matrix.drawPixel(24, 6, matrix.Color888(2,2,2));
matrix.drawPixel(29, 6, matrix.Color888(169,60,44));
matrix.drawPixel(2, 7, matrix.Color888(169,61,45));
matrix.drawPixel(5, 7, matrix.Color888(12,73,193));
matrix.drawPixel(25, 7, matrix.Color888(11,73,192));
matrix.drawPixel(29, 7, matrix.Color888(169,61,45));
matrix.drawPixel(4, 8, matrix.Color888(3,3,3));
matrix.drawPixel(26, 8, matrix.Color888(3,3,3));
matrix.drawPixel(28, 8, matrix.Color888(168,60,44));
matrix.drawPixel(2, 22, matrix.Color888(12,73,192));
matrix.drawPixel(5, 22, matrix.Color888(11,73,192));
matrix.drawPixel(27, 22, matrix.Color888(12,73,192));
matrix.drawPixel(2, 23, matrix.Color888(168,60,44));
matrix.drawPixel(6, 23, matrix.Color888(11,73,192));
matrix.drawPixel(25, 23, matrix.Color888(2,2,2));
matrix.drawPixel(29, 23, matrix.Color888(169,60,44));
matrix.drawPixel(1, 24, matrix.Color888(12,73,192));
matrix.drawPixel(7, 24, matrix.Color888(2,2,2));
matrix.drawPixel(1, 25, matrix.Color888(169,60,44));
matrix.drawPixel(6, 25, matrix.Color888(3,3,3));
matrix.drawPixel(24, 25, matrix.Color888(3,3,3));
matrix.drawPixel(30, 25, matrix.Color888(169,60,44));
matrix.drawPixel(1, 26, matrix.Color888(12,74,193));
matrix.drawPixel(2, 26, matrix.Color888(12,73,193));
matrix.drawPixel(3, 26, matrix.Color888(3,3,3));
matrix.drawPixel(27, 26, matrix.Color888(12,73,193));
matrix.drawPixel(30, 26, matrix.Color888(169,60,44));
}

void frame17(){
matrix.drawPixel(1, 3, matrix.Color888(12,73,193));
matrix.drawPixel(2, 3, matrix.Color888(3,3,3));
matrix.drawPixel(0, 4, matrix.Color888(169,60,44));
matrix.drawPixel(28, 4, matrix.Color888(12,73,193));
matrix.drawPixel(31, 4, matrix.Color888(12,73,193));
matrix.drawPixel(0, 5, matrix.Color888(168,60,44));
matrix.drawPixel(6, 5, matrix.Color888(12,73,192));
matrix.drawPixel(25, 5, matrix.Color888(12,74,193));
matrix.drawPixel(30, 5, matrix.Color888(168,60,44));
matrix.drawPixel(31, 5, matrix.Color888(12,73,192));
matrix.drawPixel(1, 6, matrix.Color888(169,60,44));
matrix.drawPixel(6, 6, matrix.Color888(3,3,3));
matrix.drawPixel(30, 6, matrix.Color888(169,61,45));
matrix.drawPixel(1, 7, matrix.Color888(169,60,44));
matrix.drawPixel(5, 7, matrix.Color888(3,3,3));
matrix.drawPixel(25, 7, matrix.Color888(3,3,3));
matrix.drawPixel(30, 7, matrix.Color888(12,73,193));
matrix.drawPixel(1, 8, matrix.Color888(12,74,193));
matrix.drawPixel(2, 8, matrix.Color888(169,60,44));
matrix.drawPixel(3, 8, matrix.Color888(3,3,3));
matrix.drawPixel(27, 8, matrix.Color888(12,73,193));
matrix.drawPixel(29, 8, matrix.Color888(168,59,43));
matrix.drawPixel(1, 9, matrix.Color888(12,73,192));
matrix.drawPixel(2, 9, matrix.Color888(169,60,44));
matrix.drawPixel(29, 9, matrix.Color888(168,60,44));
matrix.drawPixel(1, 10, matrix.Color888(12,73,193));
matrix.drawPixel(2, 10, matrix.Color888(169,60,44));
matrix.drawPixel(29, 10, matrix.Color888(169,60,44));
matrix.drawPixel(1, 11, matrix.Color888(12,73,192));
matrix.drawPixel(2, 11, matrix.Color888(169,60,44));
matrix.drawPixel(29, 11, matrix.Color888(169,60,44));
matrix.drawPixel(1, 12, matrix.Color888(12,73,193));
matrix.drawPixel(2, 12, matrix.Color888(169,60,44));
matrix.drawPixel(29, 12, matrix.Color888(169,61,45));
matrix.drawPixel(1, 13, matrix.Color888(12,74,193));
matrix.drawPixel(2, 13, matrix.Color888(168,60,44));
matrix.drawPixel(29, 13, matrix.Color888(169,60,44));
matrix.drawPixel(1, 14, matrix.Color888(12,74,193));
matrix.drawPixel(2, 14, matrix.Color888(169,60,44));
matrix.drawPixel(29, 14, matrix.Color888(169,60,44));
matrix.drawPixel(1, 15, matrix.Color888(12,74,193));
matrix.drawPixel(2, 15, matrix.Color888(168,60,44));
matrix.drawPixel(29, 15, matrix.Color888(169,60,44));
matrix.drawPixel(1, 16, matrix.Color888(12,73,193));
matrix.drawPixel(2, 16, matrix.Color888(168,60,44));
matrix.drawPixel(29, 16, matrix.Color888(169,60,44));
matrix.drawPixel(1, 17, matrix.Color888(12,73,192));
matrix.drawPixel(2, 17, matrix.Color888(169,60,44));
matrix.drawPixel(29, 17, matrix.Color888(169,60,44));
matrix.drawPixel(1, 18, matrix.Color888(12,73,193));
matrix.drawPixel(2, 18, matrix.Color888(169,60,44));
matrix.drawPixel(29, 18, matrix.Color888(169,60,44));
matrix.drawPixel(1, 19, matrix.Color888(12,73,192));
matrix.drawPixel(2, 19, matrix.Color888(168,60,44));
matrix.drawPixel(29, 19, matrix.Color888(169,60,44));
matrix.drawPixel(1, 20, matrix.Color888(12,74,193));
matrix.drawPixel(2, 20, matrix.Color888(168,60,44));
matrix.drawPixel(29, 20, matrix.Color888(169,61,45));
matrix.drawPixel(1, 21, matrix.Color888(12,73,193));
matrix.drawPixel(2, 21, matrix.Color888(169,60,44));
matrix.drawPixel(29, 21, matrix.Color888(168,60,44));
matrix.drawPixel(1, 22, matrix.Color888(12,73,193));
matrix.drawPixel(2, 22, matrix.Color888(168,60,44));
matrix.drawPixel(5, 22, matrix.Color888(2,2,2));
matrix.drawPixel(27, 22, matrix.Color888(3,3,3));
matrix.drawPixel(29, 22, matrix.Color888(168,60,44));
matrix.drawPixel(1, 23, matrix.Color888(168,60,44));
matrix.drawPixel(6, 23, matrix.Color888(3,3,3));
matrix.drawPixel(26, 23, matrix.Color888(12,74,193));
matrix.drawPixel(30, 23, matrix.Color888(12,74,193));
matrix.drawPixel(1, 24, matrix.Color888(168,60,44));
matrix.drawPixel(6, 24, matrix.Color888(12,73,192));
matrix.drawPixel(25, 24, matrix.Color888(11,73,192));
matrix.drawPixel(30, 24, matrix.Color888(169,60,44));
matrix.drawPixel(0, 25, matrix.Color888(169,60,44));
matrix.drawPixel(5, 25, matrix.Color888(12,74,193));
matrix.drawPixel(25, 25, matrix.Color888(12,74,193));
matrix.drawPixel(31, 25, matrix.Color888(169,61,45));
matrix.drawPixel(0, 26, matrix.Color888(12,73,193));
matrix.drawPixel(2, 26, matrix.Color888(3,3,3));
matrix.drawPixel(27, 26, matrix.Color888(3,3,3));
matrix.drawPixel(31, 26, matrix.Color888(13,74,193));
}

void frame18(){
matrix.drawPixel(0, 3, matrix.Color888(12,73,192));
matrix.drawPixel(1, 3, matrix.Color888(3,3,3));
matrix.drawPixel(4, 4, matrix.Color888(12,73,192));
matrix.drawPixel(5, 4, matrix.Color888(3,3,3));
matrix.drawPixel(28, 4, matrix.Color888(3,3,3));
matrix.drawPixel(29, 4, matrix.Color888(12,74,193));
matrix.drawPixel(31, 4, matrix.Color888(169,60,44));
matrix.drawPixel(6, 5, matrix.Color888(3,3,3));
matrix.drawPixel(25, 5, matrix.Color888(3,3,3));
matrix.drawPixel(31, 5, matrix.Color888(168,60,44));
matrix.drawPixel(0, 6, matrix.Color888(169,60,44));
matrix.drawPixel(5, 6, matrix.Color888(12,73,193));
matrix.drawPixel(25, 6, matrix.Color888(3,3,3));
matrix.drawPixel(31, 6, matrix.Color888(169,60,44));
matrix.drawPixel(0, 7, matrix.Color888(169,60,45));
matrix.drawPixel(4, 7, matrix.Color888(3,3,3));
matrix.drawPixel(26, 7, matrix.Color888(12,74,193));
matrix.drawPixel(30, 7, matrix.Color888(169,60,44));
matrix.drawPixel(31, 7, matrix.Color888(169,60,44));
matrix.drawPixel(0, 8, matrix.Color888(168,60,44));
matrix.drawPixel(1, 8, matrix.Color888(169,60,44));
matrix.drawPixel(3, 8, matrix.Color888(12,73,193));
matrix.drawPixel(27, 8, matrix.Color888(3,3,3));
matrix.drawPixel(30, 8, matrix.Color888(169,60,44));
matrix.drawPixel(31, 8, matrix.Color888(168,60,44));
matrix.drawPixel(0, 9, matrix.Color888(169,61,45));
matrix.drawPixel(1, 9, matrix.Color888(168,60,44));
matrix.drawPixel(3, 9, matrix.Color888(12,73,192));
matrix.drawPixel(28, 9, matrix.Color888(169,60,44));
matrix.drawPixel(30, 9, matrix.Color888(168,60,44));
matrix.drawPixel(31, 9, matrix.Color888(169,60,44));
matrix.drawPixel(0, 10, matrix.Color888(169,60,44));
matrix.drawPixel(1, 10, matrix.Color888(169,60,44));
matrix.drawPixel(3, 10, matrix.Color888(12,73,193));
matrix.drawPixel(28, 10, matrix.Color888(169,60,44));
matrix.drawPixel(30, 10, matrix.Color888(169,60,44));
matrix.drawPixel(31, 10, matrix.Color888(168,60,44));
matrix.drawPixel(0, 11, matrix.Color888(169,60,44));
matrix.drawPixel(1, 11, matrix.Color888(168,60,44));
matrix.drawPixel(3, 11, matrix.Color888(12,73,192));
matrix.drawPixel(28, 11, matrix.Color888(169,60,44));
matrix.drawPixel(30, 11, matrix.Color888(168,60,44));
matrix.drawPixel(31, 11, matrix.Color888(169,60,44));
matrix.drawPixel(0, 12, matrix.Color888(169,60,45));
matrix.drawPixel(1, 12, matrix.Color888(169,60,44));
matrix.drawPixel(3, 12, matrix.Color888(12,73,193));
matrix.drawPixel(28, 12, matrix.Color888(168,59,43));
matrix.drawPixel(30, 12, matrix.Color888(169,60,44));
matrix.drawPixel(31, 12, matrix.Color888(169,60,44));
matrix.drawPixel(0, 13, matrix.Color888(169,61,45));
matrix.drawPixel(1, 13, matrix.Color888(169,60,44));
matrix.drawPixel(3, 13, matrix.Color888(12,73,192));
matrix.drawPixel(28, 13, matrix.Color888(168,60,44));
matrix.drawPixel(30, 13, matrix.Color888(168,60,44));
matrix.drawPixel(31, 13, matrix.Color888(168,60,44));
matrix.drawPixel(0, 14, matrix.Color888(168,60,44));
matrix.drawPixel(1, 14, matrix.Color888(169,60,44));
matrix.drawPixel(3, 14, matrix.Color888(12,73,192));
matrix.drawPixel(28, 14, matrix.Color888(169,60,44));
matrix.drawPixel(30, 14, matrix.Color888(169,60,45));
matrix.drawPixel(31, 14, matrix.Color888(168,60,44));
matrix.drawPixel(0, 15, matrix.Color888(169,60,44));
matrix.drawPixel(1, 15, matrix.Color888(169,60,45));
matrix.drawPixel(3, 15, matrix.Color888(12,74,193));
matrix.drawPixel(28, 15, matrix.Color888(169,60,44));
matrix.drawPixel(30, 15, matrix.Color888(169,60,44));
matrix.drawPixel(31, 15, matrix.Color888(169,60,44));
matrix.drawPixel(0, 16, matrix.Color888(169,60,44));
matrix.drawPixel(1, 16, matrix.Color888(169,60,44));
matrix.drawPixel(3, 16, matrix.Color888(12,73,192));
matrix.drawPixel(28, 16, matrix.Color888(169,60,44));
matrix.drawPixel(30, 16, matrix.Color888(169,60,45));
matrix.drawPixel(31, 16, matrix.Color888(169,60,44));
matrix.drawPixel(0, 17, matrix.Color888(169,60,44));
matrix.drawPixel(1, 17, matrix.Color888(168,60,44));
matrix.drawPixel(3, 17, matrix.Color888(12,73,193));
matrix.drawPixel(28, 17, matrix.Color888(169,60,44));
matrix.drawPixel(30, 17, matrix.Color888(168,59,44));
matrix.drawPixel(31, 17, matrix.Color888(168,60,44));
matrix.drawPixel(0, 18, matrix.Color888(169,61,45));
matrix.drawPixel(1, 18, matrix.Color888(169,60,44));
matrix.drawPixel(3, 18, matrix.Color888(12,73,193));
matrix.drawPixel(28, 18, matrix.Color888(169,60,44));
matrix.drawPixel(30, 18, matrix.Color888(169,60,44));
matrix.drawPixel(31, 18, matrix.Color888(169,60,44));
matrix.drawPixel(0, 19, matrix.Color888(168,60,44));
matrix.drawPixel(1, 19, matrix.Color888(168,60,44));
matrix.drawPixel(3, 19, matrix.Color888(12,73,192));
matrix.drawPixel(28, 19, matrix.Color888(169,60,44));
matrix.drawPixel(30, 19, matrix.Color888(169,60,45));
matrix.drawPixel(31, 19, matrix.Color888(169,60,44));
matrix.drawPixel(0, 20, matrix.Color888(169,61,45));
matrix.drawPixel(1, 20, matrix.Color888(169,60,44));
matrix.drawPixel(3, 20, matrix.Color888(12,74,193));
matrix.drawPixel(28, 20, matrix.Color888(169,60,44));
matrix.drawPixel(30, 20, matrix.Color888(169,60,45));
matrix.drawPixel(31, 20, matrix.Color888(169,60,44));
matrix.drawPixel(0, 21, matrix.Color888(168,60,44));
matrix.drawPixel(1, 21, matrix.Color888(169,60,44));
matrix.drawPixel(3, 21, matrix.Color888(12,74,193));
matrix.drawPixel(28, 21, matrix.Color888(169,61,45));
matrix.drawPixel(30, 21, matrix.Color888(169,60,45));
matrix.drawPixel(31, 21, matrix.Color888(169,61,45));
matrix.drawPixel(0, 22, matrix.Color888(169,60,44));
matrix.drawPixel(1, 22, matrix.Color888(169,60,44));
matrix.drawPixel(4, 22, matrix.Color888(3,3,3));
matrix.drawPixel(30, 22, matrix.Color888(169,60,45));
matrix.drawPixel(31, 22, matrix.Color888(169,60,44));
matrix.drawPixel(0, 23, matrix.Color888(169,60,44));
matrix.drawPixel(5, 23, matrix.Color888(12,74,193));
matrix.drawPixel(26, 23, matrix.Color888(3,3,3));
matrix.drawPixel(30, 23, matrix.Color888(169,60,44));
matrix.drawPixel(31, 23, matrix.Color888(169,60,44));
matrix.drawPixel(0, 24, matrix.Color888(169,60,44));
matrix.drawPixel(6, 24, matrix.Color888(3,3,3));
matrix.drawPixel(25, 24, matrix.Color888(2,2,2));
matrix.drawPixel(31, 24, matrix.Color888(169,60,44));
matrix.drawPixel(5, 25, matrix.Color888(3,3,3));
matrix.drawPixel(25, 25, matrix.Color888(4,4,4));
matrix.drawPixel(1, 26, matrix.Color888(3,3,3));
matrix.drawPixel(28, 26, matrix.Color888(12,74,193));
matrix.drawPixel(31, 26, matrix.Color888(169,61,45));
}

void frame19(){
matrix.drawPixel(0, 3, matrix.Color888(3,3,3));
matrix.drawPixel(3, 4, matrix.Color888(12,74,193));
matrix.drawPixel(4, 4, matrix.Color888(3,3,3));
matrix.drawPixel(5, 5, matrix.Color888(12,73,193));
matrix.drawPixel(26, 5, matrix.Color888(12,73,192));
matrix.drawPixel(5, 6, matrix.Color888(3,3,3));
matrix.drawPixel(26, 6, matrix.Color888(12,73,193));
matrix.drawPixel(26, 7, matrix.Color888(3,3,3));
matrix.drawPixel(27, 7, matrix.Color888(12,73,192));
matrix.drawPixel(5, 23, matrix.Color888(3,3,3));
matrix.drawPixel(27, 23, matrix.Color888(12,73,193));
matrix.drawPixel(5, 24, matrix.Color888(12,73,193));
matrix.drawPixel(26, 24, matrix.Color888(12,73,193));
matrix.drawPixel(26, 25, matrix.Color888(12,74,193));
matrix.drawPixel(28, 26, matrix.Color888(3,3,3));
matrix.drawPixel(29, 26, matrix.Color888(12,73,193));
}

void frame20(){
matrix.drawPixel(28, 4, matrix.Color888(12,73,193));
matrix.drawPixel(29, 4, matrix.Color888(169,60,44));
matrix.drawPixel(5, 5, matrix.Color888(169,60,44));
matrix.drawPixel(26, 5, matrix.Color888(168,60,44));
matrix.drawPixel(5, 6, matrix.Color888(169,60,44));
matrix.drawPixel(26, 6, matrix.Color888(169,60,44));
matrix.drawPixel(4, 7, matrix.Color888(169,60,44));
matrix.drawPixel(27, 7, matrix.Color888(168,60,44));
matrix.drawPixel(3, 22, matrix.Color888(12,74,193));
matrix.drawPixel(26, 23, matrix.Color888(12,74,193));
matrix.drawPixel(27, 23, matrix.Color888(169,60,44));
matrix.drawPixel(5, 24, matrix.Color888(169,60,44));
matrix.drawPixel(26, 24, matrix.Color888(169,60,44));
matrix.drawPixel(5, 25, matrix.Color888(12,74,193));
matrix.drawPixel(26, 25, matrix.Color888(169,60,45));
matrix.drawPixel(0, 26, matrix.Color888(169,60,44));
matrix.drawPixel(1, 26, matrix.Color888(12,74,193));
}

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
  matrix.fillScreen(matrix.Color333(0, 0, 0));
}