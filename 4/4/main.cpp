#include <iostream>

void doNothing(int&) //Здесь испольузую doNothing, чтобы компилятор не ругался
{
}

int main()
{
    int x;
    doNothing(x);
    std::cout << x << "\n";
    return 0;
}
