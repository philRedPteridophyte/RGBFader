#include "Module.h"

//--------------------------

colourV redV = {0 , 255};
colourV greenV = {0 , 255};
colourV blueV = {0 , 255};


// setting up profile 0
colour red = {255, 0, 0};
colour green = {0, 255, 0};
colour blue = {0, 0, 255};

stage sRed = {red, 255, 255};
stage sGreen = {green, 0, 255};
stage sBlue = {blue, 0, 255};

PROFILE prof0 = {0, 3, sRed, sGreen, sBlue};

//outputs

int ledR0 = 3;
int ledG0 = 5;
int ledB0 = 6;

int ledR1 = 9;
int ledG1 = 10;
int ledB1 = 11;




void setup() {
  pinMode(ledR0, OUTPUT);
  pinMode(ledG0, OUTPUT);
  pinMode(ledB0, OUTPUT);
  pinMode(ledR1, OUTPUT);
  pinMode(ledG1, OUTPUT);
  pinMode(ledB1, OUTPUT); 
}


void loop() {
  
}
