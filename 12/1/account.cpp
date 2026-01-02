#include "account.h"
#include <iostream>

int account(int balance)
{
    std::cout << "Внесите сумму\n";
    int deposit {};
    std::cin >> deposit;
    if (deposit > 0)
    {
        balance += deposit;
        return balance + deposit;
    }
    return balance;
}
