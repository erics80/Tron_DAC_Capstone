#ifndef THERMISTOR_H
#define THERMISTOR_H

class thermistor{
public:
int pin;
double beta;
int B50;
int B00;
void setThermistor(int pin, double beta, int B50, int B100);
double simpleThermistorRead();
double thermistorRead();
};

#endif
