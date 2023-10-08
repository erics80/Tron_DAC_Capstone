#ifndef THERMISTOR_H
#define THERMISTOR_H

class Thermistor{

private:
int[] _pin;
double[] _beta;

public:
Thermistor(int pin[], double beta[]);
double thermistorRead();
};

#endif
