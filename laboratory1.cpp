// laboratory1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <sstream> // для std::stringstream
#include "myHeader.h"
#include "Car.h"
#include "Bike.h"
int main(int args, char *argv[])
{
    std::cout << "Hello World!\n";
    int number1 = 4;
    int number2 = 4;
    std::cout << "enter the firs operand (integer)" << endl;
    std::string temp_str;
    std::cin >> temp_str;
    while(!check_number(temp_str))
    {
        std::cout << "enter the firs operand (integer)" << endl;
        std::cin >> temp_str;
    }
    std::stringstream convert1(temp_str);
    convert1 >> number1;
    std::cin.clear();
    std::cin.ignore(32767, '\n');
    std::stringstream convert(argv[1]);
    int myint;
    if (!(convert >> myint)) 
    {
        myint = 1;
    }       
    number2 = myint;
    std::string string1 = "text1";
    std::string string2 = "text2";
    std::cout << Concatination(string1, string2);
    std::cout << endl;
    std::cout << Addition(number1, number2);
    std::cout << endl;
    std::cout << Multiplication(number1, number2);
    std::cout << endl;
    Car car1(985.7, 200, "wheels", 4, "BMW", 2020);
    Bike bike1(9.5, 200, "wheels", 2);
    std::cout << "Info of the car: " << std::endl;
    car1.PrintEntity();
    std::cout << "action of a car: ";
    car1.action();
    std::cout << std::endl;
    std::cout << "Info of the bike: " << std::endl;
    bike1.PrintEntity();
    std::cout << "action of a bike: ";
    bike1.action();
    std::cout << std::endl;

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
