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