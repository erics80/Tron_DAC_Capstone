//write any useful functions that we can use here

//Example
//Takes in a temperature in Celsius and converts it to Fahrenheit
double CtoF(double Ctemp){
  double Ftemp = temp*9/5 + 32;
  return Ftemp;
}

//Takes in a pin number, sensor beta value, nominal resistance, and known resistor value (voltage divider) 
//and outputs the temperature of the thermistor reading in Celsius (takes 5 readings)


//Returns the average of values in the array
double avg(double values[]){
  double sum;
  int arraySize = sizeof(Values)/sizeof(double);
  for(int i = 0; i < arraySize; i++){
    sum += values[i];
}
  double avg = sum/arraySize;
  return avg;
}

//Reads a pin 5 times and gives an average value
double smoothRead(int pin){
  double sum;
  for(int i = 0; i < 5; i++){
  sum += (double)analogRead(pin);
    }
  double reading = sum/5;
  return reading
}
