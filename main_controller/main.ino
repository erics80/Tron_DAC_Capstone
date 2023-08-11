#include <math.h> //for standard math functions
#include <LiquidCrystal.h> //For easy use of LCD display
#include <Wire.h> //for I2C reading
#include "pin_numbers.h"
//main program for arduino controller

void setup() {
  analogReadResolution(12); //changing the ADC resolution to 12 bits. ES
  analogWriteResolution(12); //changing the PWM output resolution to 12 bits. ES
}

void loop(){
}
