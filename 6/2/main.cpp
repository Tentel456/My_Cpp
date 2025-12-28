#include <iostream>

int main()
{
    std::cout << "Введите целое число:";
    int x {};
    std::cin >> x;
    std::cout << "Ваше число, умноженное на 2:" << x * 2 << "\n";
    std::cout << "Ваше число, умноженное на 3:" << x * 3 << "\n";
    return 0;
}
