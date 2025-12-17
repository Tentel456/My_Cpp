#include <iostream>

int main()
{
    int x {5};
    bool b {x};
    std::cout << b;
    return 0;
}
//все ненулевые значения переменной x при переводе
//в bool будут давать 1 (True)
