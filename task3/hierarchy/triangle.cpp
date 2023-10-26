#include <iostream>
#include <clocale>
#include "triangle.h"


double Triangle::getA() { return A; };
double Triangle::getB() { return B; };
double Triangle::getC() { return C; };

void Triangle::print()
{
    std::cout << "�����������:" << std::endl;
    std::cout << "�������: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
    std::cout << "����: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
}


void RightTriangle::print()
{
    std::cout << "������������� �����������:" << std::endl;
    std::cout << "�������: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
    std::cout << "����: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
}


void Identical_triangle::print()
{
    std::cout << "�������������� �����������:" << std::endl;
    std::cout << "�������: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
    std::cout << "����: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
}


void Equal_triangle::print()
{
    std::cout << "�����c�������� �����������:" << std::endl;
    std::cout << "�������: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
    std::cout << "����: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
}

