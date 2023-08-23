//write any useful functions that we can use here


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

//Changes the ADC and DAC Resolution. Takes in an integer which will be the resolution in bits 
void analogResolution(int res){
  analogReadResolution(res); //changing the ADC resolution to 12 bits. 
  analogWriteResolution(res); //changing the PWM output resolution to 12 bits.
}
