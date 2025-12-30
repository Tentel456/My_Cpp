#include <iostream>
#include <cstdlib>

int substract(int a, int b);
int multiply(int a, int b);

int main()
{
    std::cout << substract(10,10) << "\n";
    std::cout << multiply(10,10) << "\n";
    return EXIT_SUCCESS;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}
