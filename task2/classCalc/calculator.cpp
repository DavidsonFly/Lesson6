#include <iostream>
#include <cmath>
#include "calc.h"



    double Calculator:: addition(double x, double y) {
        return x + y;
    }

    double Calculator:: substraction(double x, double y) {
        return x - y;
    }

    double Calculator:: multiplication(double x, double y) {
        return x * y;
    }

    double Calculator:: divide(double x, double y) {
        if (y != 0.0) {
            return x / y;
        }
        else {
            return 0.0;
        }
    }

    double Calculator:: power(double base, double exponent) {
        return pow(base, exponent);
    }
