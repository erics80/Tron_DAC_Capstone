#ifndef THERMISTOR_H
#define THERMISTOR_H

double simpleThermistorRead(int pin, double beta);
double thermistorRead(int pin, int B25_50, int B25_100);

#endif
