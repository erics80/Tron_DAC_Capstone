#ifndef THERMISTOR_H
#define THERMISTOR_H

class Thermistor{

private:
int t_pin;
double t_beta;

public:
void setThermistor(int pin, double beta);
double thermistorRead();
};

#endif
