#include <iostream>
#include <cstdlib>

int main()
{
    int users {100};
    double balance {10000};
    char currency {'$'};
    bool is_active {true};
    std::cout << "Пользователей всего:\n" << users << "\n" <<  "Ваш баланс:\n" << balance << currency << "\n" << is_active;
    return EXIT_SUCCESS;
}
