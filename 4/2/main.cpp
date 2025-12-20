#include <iostream>

int main()
{
    int x {};
    int y {};
    std::cout << "Введите x:" << "\n";
    std::cin >> x;
    std::cout << "Введите y:" << "\n";
    std::cin >> y;
    int sum = x + y;
    int umn = x * y;
    float del = x / y;
    std::cout << "Сумма равна:" << sum << "\n";
    std::cout << "Произведение равно:" << umn << "\n";
    std::cout << "Деление равно:" << del;
    return 0;
}
