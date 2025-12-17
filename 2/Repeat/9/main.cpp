#include <iostream>

int main()
{
    double d {8.90};
    int a { static_cast<int>(d) };
    return 0;
}
//Лучше использовать static_cast для перевода из double в int!
