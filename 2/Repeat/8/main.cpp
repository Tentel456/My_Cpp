#include <iostream>

int main()
{
    double d {7.7};
    int x {d};
    std::cout << x;
    return 0;
}
//Здесь выдаст warning, поскольку brace инициализация не позволяет переводить тип данных double в int, поскольку может произойти потеря данных
