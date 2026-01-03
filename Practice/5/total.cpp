#include "total.h"
#include "money.h"
#include <iostream>

int total()
{
    int rasp { money() };
    if (rasp > 0)
    {
        std::cout << "Ваш остаток:" << rasp;
    }
    return 0;
}
