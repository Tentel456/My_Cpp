#include <iostream>

int main()
{
    double y {};
    int x {100};
    std::cout << "Введите значение процентов (дробная часть)" << "\n";
    std::cin >> y;
    char procent {'%'};
    int total  {x * y};
    std::cout << total << procent;
    return 0;
}
