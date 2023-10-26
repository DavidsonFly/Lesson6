#pragma once


class Triangle
{
protected:
    double a, b, c;
    double A, B, C;

public:
    Triangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC)
        :a(sideA), b(sideB), c(sideC), A(angleA), B(angleB), C(angleC) {}

    double getA();
    double getB();
    double getC();

    virtual void print();
};

class RightTriangle : public Triangle {
public:
    RightTriangle(double sideA, double sideB, double sideC)
        : Triangle(sideA, sideB, sideC, 50.0, 60.0, 90.0) {}

    

    void print();
};

class Identical_triangle : public Triangle
{
public:
    Identical_triangle(double base, double identSide)
        :Triangle(identSide, identSide, base, 50.0, 60.0, 70.0) {}

    void print() ;
};

class Equal_triangle : public Triangle
{
public:
    Equal_triangle(double equalSide)
        :Triangle(equalSide, equalSide, equalSide, 60.0, 60.0, 60.0) {}

    void print();
};
