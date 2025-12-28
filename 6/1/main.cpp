// Задача с learncpp.com
#include <iostream>

int main()
{
    int x {};
    std::cout << "Введите число:" << "\n";
    std::cin >> x;
    int y { x * 2 };
    std::cout << "Ваше число, умноженное на 2:" << "\n";
    std::cout << y;
    return 0;
}
