double simpleThermistorRead(int pin, double beta){
double temp;
  double rt;
  double r0 = 10000;
  double r1 = 10000;
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

double thermistorRead(int pin, double A, double B, double C){
double temp;
  double rt;
  double r0 = 10000;
  double r1 = 10000;
  for(int i = 0; i < 5; i++){
  if((double)analogRead(pin) != 0){
  rt = r1 * (4095.00/(double)analogRead(pin))- 1.00;
  temp += 1/(A+B*log(rt)+C*(log(rt)*log(rt)*log(rt)))-273.15
    
  } else { //divide by 0 case
    
  rt = r1 * (4095.00/1.00)- 1.00;
  temp += 1/(A+B*log(rt)+C*(log(rt)*log(rt)*log(rt)))-273.15
  }
  }
  return temp/5.00;
}
