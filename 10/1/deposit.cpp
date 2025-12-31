#include <iostream>

int deposit(int balance)
{
	int deposit{};
	std::cout << "Enter deposit amount: ";
	std::cin >> deposit;
	balance += deposit;
	std::cout << "New balance after deposit: " << balance << "\n";
	return balance;
}
