// hierarchy.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "triangle.h"
#include "Quadrilateral.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    Triangle triangle(10.0, 20.0, 30.0, 50.0, 60.0, 70.0);
    RightTriangle right_triangle(10.0, 20.0, 30.0);
    Identical_triangle ident_triangle(10.0, 20.0);
    Equal_triangle equal_triangle(30.0);

    Quadrilateral quadri(10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0);
    Rectangle rec(10.0, 40.0);
    Square square(10.0);
    Parallelogramm paral(20.0, 30.0, 60.0, 50.0);
    Rhombus romb(40.0, 40.0);

    triangle.print();
    std::cout << std::endl;
    right_triangle.print();
    std::cout << std::endl;
    ident_triangle.print();
    std::cout << std::endl;
    equal_triangle.print();
    std::cout << std::endl;

    quadri.print();
    std::cout << std::endl;
    rec.print();
    std::cout << std::endl;
    square.print();
    std::cout << std::endl;
    paral.print();
    std::cout << std::endl;
    romb.print();


    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
