#include <iostream>
#include <cstdlib>

#define CRYPTO "Bitcoin"

int input();

int main()
{
    input();
    int rouble {input() / 70};
    char Dollar {'$'};
    char roubles {'%'};

    #ifdef CRYPTO
    std::cout << "Текущий курс битокина (по вашим словам):\n" << CRYPTO <<  input() << Dollar << "В рублях это:\n" << rouble << roubles;
    #endif

    #ifdef ETHEREUM
    std::cout << "Текущий курс битокина (по вашим словам):\n" << input() << Dollar << "В рублях это:\n" << rouble << roubles;
    #endif
    return EXIT_SUCCESS;
}
