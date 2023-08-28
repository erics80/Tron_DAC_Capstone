#ifndef THERMISTOR_H
#define THERMISTOR_H

class Thermistor{

private:
int _pin;
double _beta;

public:
void setThermistor(int pin, double beta);
double thermistorRead();
};

#endif
