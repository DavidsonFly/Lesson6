// math.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "mathOperations.h"

int main()
{
    double a, b;
    std::cout << "Enter the first value:\n";
    std::cin >> a;
    std::cout << "Enter the second value:\n";
    std::cin >> b;

    int choice;
    std::cout << "Choose operation (1=add, 2=subtract, 3=multiply, 4=divide, 5=power):\n";
    std::cin >> choice;

    double result;
    switch (choice)
    {
    case 1:
        result = addition(a, b);
        break;
    case 2:
        result = substraction(a, b);
        break;
    case 3:
        result = multiplication(a, b);
        break;
    case 4:
        result = divide(a, b);
        break;
    case 5:
        result = power(a, b);
        break;
    default:
        std::cout << "Incorrect operation choice...\n";
        return 1;
    }

    std::cout << "The result is: " << result << '\n';

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
