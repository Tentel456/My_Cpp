#include <iostream>

int main()
{
    int a {10};
    double b {15.55};
    char Dollar {'$'};
    bool active_system {true};
    std::cout << "Баланс:" << "\n";
    std::cout << a << "\n";
    std::cout << "из" << "\n";
    std::cout << b; 
    std::cout << Dollar << "\n";
    std::cout << active_system;
    return 0;
}
