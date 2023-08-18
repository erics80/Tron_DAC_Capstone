//write any useful functions that we can use here

//Example
//Takes in a temperature in Celsius and converts it to Fahrenheit
double CtoF(double Ctemp){
  double Ftemp = Ctemp*9/5 + 32;
  return Ftemp;
}



//Returns the average of values in the array
double avg(double values[], int arraySize){
  double sum;
  for(int i = 0; i < arraySize; i++){
    sum += values[i];
}
  double avg = sum/double(arraySize);
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
