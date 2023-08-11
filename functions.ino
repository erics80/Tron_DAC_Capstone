#include <math.h> //for standard math functions
#include <LiquidCrystal.h> //For easy use of LCD display
#include <Wire.h> //for I2C reading

//write any useful functions that we can use here

//Example
//Takes in a temperature in Celsius and converts it to Fahrenheit
double CtoF(double Ctemp){
  Ftemp = temp*9/5 + 32;
  return Ftemp;
}

//Takes in a pin number, sensor beta value, nominal resistance, and known resistor value (voltage divider) 
//and outputs the temperature of the thermistor reading in Celsius

double thermistorRead(int pin, double beta, double r0, double r1){

  if((double)analogRead(pin) != 0){
 double rt = r1 * (4095.00/(double)analogRead(pin))- 1.00;
  double temp = (1/((1/298.15)+(1/beta) * log(rt/r0)))-273.15;
    
  } else { //divide by 0 case
    
  double rt = r1 * (4095.00/1.00)- 1.00;
  double temp = (1/((1/298.15)+(1/beta) * log(rt/r0)))-273.15;
  }
  
  return temp;
}
