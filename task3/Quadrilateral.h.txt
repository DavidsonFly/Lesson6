#pragma once

class Quadrilateral
{
protected:
    double a, b, c, d;
    double A, B, C, D;

public:
    Quadrilateral(double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD)
        :a(sideA), b(sideB), c(sideC), d(sideD), A(angleA), B(angleB), C(angleC), D(angleD) {}

    double getA();
    double getB();
    double getC();
    double getD();

    virtual void print();
        
};

class Rectangle :public Quadrilateral
{
public:
    Rectangle(double sideA, double sideB)
        :Quadrilateral(sideA, sideB, sideA, sideB, 90.0, 90.0, 90.0, 90.0) {}

    void print();
};

class Square : public Rectangle
{
public:
    Square(double side)
        :Rectangle(side, side) {}

    void print();
};

class Parallelogramm :public Quadrilateral
{
public:
    Parallelogramm(double sideA, double sideB, double angleA, double angleB)
        :Quadrilateral(sideA, sideB, sideA, sideB, angleA, angleB, 180.0 - angleA, 180.0 - angleB) {}

    void print();
};

class Rhombus :public Parallelogramm
{
public:
    Rhombus(double side, double angle)
        :Parallelogramm(side, side, angle, angle) {}

    void print();
};
