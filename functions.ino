//write any useful functions that we can use here

//Example
//Takes in a temperature in Celsius and converts it to Fahrenheit
double CtoF(double Ctemp){
  Ftemp = temp*9/5 + 32;
  return Ftemp;
}

//Takes in a pin number, sensor beta value, nominal resistance, and known resistor value (voltage divider) 
//and outputs the temperature of the thermistor reading in Celsius (takes 5 readings)

double thermistorRead(int pin, double beta, double r0, double r1){
double temp;
  double rt;
  for(int i = 0; i < 5; i++){
  if((double)analogRead(pin) != 0){
  rt = r1 * (4095.00/(double)analogRead(pin))- 1.00;
  temp += (1/((1/298.15)+(1/beta) * log(rt/r0)))-273.15;
    
  } else { //divide by 0 case
    
  rt = r1 * (4095.00/1.00)- 1.00;
  temp += (1/((1/298.15)+(1/beta) * log(rt/r0)))-273.15;
  }
  }
  return temp/5.00;
}

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
