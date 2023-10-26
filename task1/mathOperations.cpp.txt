
#include "MathOperations.h"
#include <cmath>
#include <iostream>


double addition(double x, double y) {
    return x + y;
}

double substraction(double x, double y) {
    return x - y;
}

double multiplication(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y != 0.0) {
        return x / y;
    }
    else {
        return 0.0;  
    }
}

double power(double base, double exponent) {
    return pow(base, exponent);
}