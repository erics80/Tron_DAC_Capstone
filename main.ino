#include <math.h> //for standard math functions
#include <LiquidCrystal.h> //For easy use of LCD display
#include <Wire.h> //for I2C reading
#include "pin_numbers.h" //header to define all pin numbers
#include "general_functions.h"
#include "thermistor.h"
#include "pressure_sensor.h"
#include "CO2_Sensor.h"
//main program for arduino controller

void setup() {
  Wire.begin(); //Start the Wire Library. ES
  Serial.begin(9600); //Start the Serial Monitor at 9600 baud. ES
  analogResolution(12);
}

void loop(){
}
