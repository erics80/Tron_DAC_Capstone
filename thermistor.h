#ifndef THERMISTOR_H
#define THERMISTOR_H

struct thermistor{
int pin;
double beta;
int B25_50;
int B25_100;
};

void setThermistor(thermistor th, int pin, double beta, int B50, int B100);
double simpleThermistorRead(thermistor th);
double thermistorRead(thermistor th);

#endif
