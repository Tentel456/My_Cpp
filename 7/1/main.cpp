#include <iostream>
#include <cstdlib>


int input()
{
    int number {};
    std::cin >> number;
    return number;
}

int doubledNumber(int x)
{
    cin >> x;
    return x * 2;
}

int main()
{
    std::cout << doubledNumber() << "\n";
    return EXIT_SUCCESS;
}
