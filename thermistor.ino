double simpleThermistorRead(int pin, double beta){
double temp;
  double rt;
  double r0 = 10000;
  double r1 = 10000;
  for(int i = 0; i < 5; i++){
  if(analogRead(pin) != 0 && analogRead(pin) != 4095){
  rt = r1 * (4095.00/analogRead(pin)-1.00);
  temp += (1/((1/298.15)+(1/beta) * log(rt/r0)))-273.15;
    
  } else if(pin == 4095){
  rt = r1 * (4095.00/4094-1.00);
  temp += (1/((1/298.15)+(1/beta) * log(rt/r0)))-273.15;
  }else { //divide by 0 case
    
  rt = r1 * (4095.00/1-1.00);
  temp += (1/((1/298.15)+(1/beta) * log(rt/r0)))-273.15;
  }
  }
  return temp/5.00;
}

double thermistorRead(int pin, int B25_50, int B25_100){
double temp;
  double rt;
  double r0 = 10000;
  double r1 = 10000;
  int t1 = 25+273.15;
  int t2 = 50+273.15;
  int t3 = 100+273.15;
  double res_50b;
  double res_100b;
  double L1;
  double L2;
  double L3;
  double Y1;
  double Y2;
  double Y3;
  double X2;
  double X3;
  double A;
  double B;
  double C;
  res_50b = r0*exp(((1/(t2))-(1/298.15))*B25_50);
  res_100b = r0*exp(((1/(t3))-(1/298.15))*B25_100);

  L1 = log(r0);
  L2 = log(res_50b);
  L3 = log(res_100b);

  Y1 = 1/t1;
  Y2 = 1/t2;
  Y3 = 1/t3;
  
  X2=(Y2-Y1)/(L2-L1);
  X3=(Y3-Y1)/(L3-L1);

  C = ((X3-X2)/(L3-L2))/(L1+L2+L3);
  B = X2-C*(L1*L1+L1*L2+L2*L2);
  A = Y1-L1*(B+C*L1*L1);

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

