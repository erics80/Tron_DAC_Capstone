void setThermistor(thermistor th, int pin, double beta, int B50, int B100){
  th.pin = pin;
  th.beta = beta
  th.B50 = B50;
  th.B100 = B100;
}

double simpleThermistorRead(thermistor th){
double temp;
  double rt;
  double reading;
  uint16_t r0 = 10000;
  uint16_t r1 = 10000;
  for(int i = 0; i < 5; i++){
 reading = analogRead(th.pin);
  if(reading == 0){
    reading = 1;
  } else if(reading == 4095){
    reading = 4094;
  }
    
  rt = r1 * (4095.00/reading-1.00);
  temp += (1/((1/298.15)+(1/th.beta) * log(rt/r0)))-273.15;


  }
  return temp/5.00;
}

double thermistorRead(thermistor th){
double temp;
  double rt;
  uint16_t reading;
  uint16_t r0 = 10000;
  uint16_t r1 = 10000;
  float t1 = 25+273.15;
  float t2 = 50+273.15;
  float t3 = 100+273.15;
  double A;
  double B;
  double C;
 

  C = (((((1/t3)-(1/t1))/(log((r0*exp(((1/(t3))-(1/298.15))*th.B100)))-log(r0)))-(((1/t2)-(1/t1))/(log((r0*exp(((1/(t2))-(1/298.15))*th.B50)))-log(r0))))/(log((r0*exp(((1/(t3))-(1/298.15))*th.B100)))-log((r0*exp(((1/(t2))-(1/298.15))*th.B50)))))/(log(r0)+log((r0*exp(((1/(t2))-(1/298.15))*th.B50)))+log((r0*exp(((1/(t3))-(1/298.15))*th.B100))));
  B = (((1/t2)-(1/t1))/(log((r0*exp(((1/(t2))-(1/298.15))*th.B50)))-log(r0)))-C*(log(r0)*log(r0)+log(r0)*log((r0*exp(((1/(t2))-(1/298.15))*th.B50)))+log((r0*exp(((1/(t2))-(1/298.15))*th.B50)))*log((r0*exp(((1/(t2))-(1/298.15))*th.B50))));
  A = (1/t1)-log(r0)*(B+C*log(r0)*log(r0));


  
for(int i = 0; i < 5; i++){
  reading = analogRead(th.pin);
  if(reading == 0){
    reading = 1;
  } else if(reading == 4095){
    reading = 4094;
  }
  
  rt = r1 * (4095.00/double(reading)-1.00);
  temp += 1/(A+B*log(rt)+C*(log(rt)*log(rt)*log(rt)))-273.15;

  }
  return temp/5.00;
}

