#include <iostream>
#include <cstdlib>

int free_money(int salary, int spending);
int investments(int safe);
int deposit(int invest);
int crypto(int invest);

int main()
{
    std::cout << "Ваша зарплата:" << "\n";
    int salary {};
    std::cin >> salary;
    std::cout << "Ваши траты:" << "\n";
    int spend {};
    std::cin >> spend;
    std::cout << "Свободные деньги:" << " " 
              << free_money(salary, spend) << "\n"
              << "Сумма на инвестиции:" << " "
              << investments(salary - spend) << "\n"
              << "Сумма на депозит:" << " "
              << deposit(salary - spend) << "\n"
              << "Сумма на криптовалюту:" << " "
              << crypto(salary-spend);
    return EXIT_SUCCESS;
}

int free_money(int salary, int spending)
{
    return salary - spending;
}

int investments(int safe)
{
    return safe / 5;
}

int deposit(int invest)
{
    return invest;
}

int crypto(int invest)
{
    return invest;
}
