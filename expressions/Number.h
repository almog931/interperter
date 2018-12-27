#ifndef FLIGHT_SIMULATOR_NUMBER_H
#define FLIGHT_SIMULATOR_NUMBER_H


#include "Expression.h"

class Number: public Expression{

    double number;

public:
    Number(double number);
    virtual double calculate();
     ~Number(){}
};


#endif //FLIGHT_SIMULATOR_NUMBER_H