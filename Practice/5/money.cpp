#include "money.h"
#include <iostream>

int money()
{
    std::cout << "Введите вашу заработную плату:\n";
    int salary{};
    std::cin >> salary;
    std::cout << "Введите ваши траты:\n";
    int spending {};
    std::cin >> spending;
    int ostatok { salary - spending };
    return ostatok;
}
