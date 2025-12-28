#include <iostream>
#include <cstdlib> // ДЛЯ EXIT_SUCCESS

int getNumber()
{
    std::cout << "Введите число:" << "\n";
    int num {};
    std::cin >> num;
    return num;
}


int main()
{
    int number { getNumber() };
    std::cout << number;
    return EXIT_SUCCESS;
}
