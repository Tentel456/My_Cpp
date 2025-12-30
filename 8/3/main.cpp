#include <iostream>
#include <cstdlib>

int square(int x);

int main()
{
    std::cout << square(100) << "\n";
    return EXIT_SUCCESS;
}

int square(int x)
{
    return x*x;
}
