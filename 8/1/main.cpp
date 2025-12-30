#include <iostream>
#include <cstdlib>

int sum(int a, int b);

int main()
{
    std::cout << "Сумма равна:" << "\n" << sum(91,9);
    return EXIT_SUCCESS;
}

int sum(int a, int b)
{
    return a + b;
}
