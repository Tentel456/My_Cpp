#include <iostream>
#include <cstdlib>

int value()
{
    std::cout << "Введите значение:" << "\n";
    int number {};
    std::cin >> number;
    return number;
}

int main()
{
    int x { value() };
    int y { value() };
    std::cout << x << "+" << y << "=" << x + y;
    return EXIT_SUCCESS;
}
