#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << "Введите вашу заработную плату:\n";
    int salary {};
    std::cin >> salary;
    std::cout << "Введите ваши траты:\n";
    int spend {};
    std::cin >> spend;
    int ostatok { salary - spend };
    if (ostatok > 0)
    {
        std::cout << "Ваш остаток:" << ostatok;
    }
    if (ostatok < 0)
    {
        std::cout << "У вас траты больше чем доходы! Займитесь своими финансами!!!";
    }
    
    if (ostatok == 0)
    {
        std::cout << "У вас нет остатка";
    }
    return EXIT_SUCCESS;
}
