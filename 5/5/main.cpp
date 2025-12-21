#include <iostream>

int calculate_free_money()
{
    int salary {};
    int spend {};
    std::cout << "Введите вашу заработную плату:" << "\n";
    std::cin >> salary;
    std::cout << "Введите ваши обязательные траты:" << "\n";
    std::cin >> spend;
    int ost { static_cast<int>(salary-spend) };
    return ost;
}

int main()
{
    int ostatok {calculate_free_money()};
    std::cout << "Ваш остаток:" << "\n";
    std::cout << ostatok;
    return 0;
}
