#include <iostream>
#include <cstdlib>

int main()
{
    double pi {3.14}; //Данный вариант лучше, поскольку исключает возможность сужающих преобразований
    // pi = 3.14 - Плохо, поскольку при переводе double в int .14 теряется
    std::cout << "Число Пи равно:" << pi;
    return EXIT_SUCCESS;
}
