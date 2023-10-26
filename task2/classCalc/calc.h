#pragma once
 
class Calculator
{
private:
	double i;
	double j;

public:
	Calculator(double x, double y)
	{
		i = x;
		j = y;
	}

	double addition(double x, double y);
	double substraction(double x, double y);
	double multiplication(double x, double y);
	double divide(double x, double y);
	double power(double base, double exponent);
};
