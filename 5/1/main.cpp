#include <iostream>

int main()
{
    int x {};
    int y {};
    std::cout << "Введите Текущий  баланс:" << "\n";
    std::cin >> x;
    std::cout << "Введите Общий баланс:" << "\n";
    std::cin >> y;
    char currency {};
    std::cout << "Введите символ валюты:" << "\n";
    std::cin >> currency;
    std::cout << "Ваш баланс:" << "\n";
    std::cout << x << currency << "\n";
    std::cout << "Общий баланс:" << "\n";
    std::cout << y << currency << "\n";
    return 0;
}
