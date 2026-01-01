#include <iostream>

int deposit(int balance)
{
    std::cout << "Введите сумму для пополнения:\n";
    int amount {};
    std::cin >> amount;
    if (amount > 0)
    {
        balance += amount;
    }
    return balance;
}
