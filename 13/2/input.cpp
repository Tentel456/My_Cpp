#include "input.h"
#include <iostream>

int readNumber()
{
    std::cout << "Введите целое число:";
    int number {};
    std::cin >> number;
    return number;
}
