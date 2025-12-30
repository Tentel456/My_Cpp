#include <iostream>
#include <cstdlib>

int free_money(int salary, int spending);
int investments(int safe);

int main()
{
    std::cout << free_money(10000000, 100000)
              << "\n" << investments(99000000);
    return EXIT_SUCCESS;
}

int free_money(int salary, int spending)
{
    return salary - spending;
}

int investments(int safe)
{
    return safe / 5;
}
