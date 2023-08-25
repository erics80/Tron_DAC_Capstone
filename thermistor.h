#ifndef THERMISTOR_H
#define THERMISTOR_H

class thermistor{
private:
int t_pin;
double t_beta;
int t_B50;
int t_B00;
public:
void setThermistor(int pin, double beta, int B50, int B100);
double simpleThermistorRead();
double thermistorRead();
};

#endif
