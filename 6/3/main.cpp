#include <iostream>

int main()
{
    std::cout << "Введите целое число:" << "\n";
    int x {};
    std::cin >> x;
    std::cout << "Введите другое целое число:" << "\n";
    int y {};
    std::cin >> y;
    std::cout << x << "+" << y << "равно:" << x + y << "\n";
    std::cout << x << "-" << y << "равно:" << x - y << "\n";
    return 0;
}
