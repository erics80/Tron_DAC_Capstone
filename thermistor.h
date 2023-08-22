#ifndef THERMISTOR_H
#define THERMISTOR_H

struct thermistor{
int pin;
int beta;
int B25_50;
int B25_100;
};

double simpleThermistorRead(int pin, double beta);
double thermistorRead(int pin, int B25_50, int B25_100);

#endif
