#include <iostream>
#include <cstdlib>

void welcome();
int deposit(int balance);

int main()
{
    welcome();
    int balance {0};
    balance = deposit(balance);
    std::cout << "Ваш баланс после пополнения:\n" << balance;
    return EXIT_SUCCESS;
}
