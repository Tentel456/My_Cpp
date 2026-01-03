#include <iostream>
#include <cstdlib>

int main()
{
    char ten { static_cast<char>('1') };
    int number { ten };
    bool action { static_cast<bool>(number) };
    double pi { 3.14 };
    int full { static_cast<int>(pi) };
    std::cout << ten << "\n" << number << "\n" << action << "\n" << pi << "\n" << full << "\n";
    return EXIT_SUCCESS;
}
