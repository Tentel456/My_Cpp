#include <iostream>

int welcome() {
    std::cout << "Добро пожаловать в Распределитель финансов!" << "\n";
    std::cout << "Здесь вы сможете грамотно распределить свои финансы (наверное)"
    << "И узнаете, как лучше потратить свои средства" << "\n";
    return 0;
}

int money (){
    char cash {};
    std::cout << "Введите вашу валюту (знак):" << "\n";
    std::cin >> cash;
    return cash;
}

int calculate()
{
    int salary {};
    int spending {};
    char valuta { money() };
    std::cout << "Введите вашу заработную плату" << "\n";
    std::cin >> salary;
    std::cout << "Сколько денег у вас уходит на ваши обязательные траты?"
    std::cin >> spending;
    int ostatok { salary - spending };
    return ostatok;
}

int delitel()
{
    int total { calculate() };
    int investments { total / 5 };
    return investments;
}

int vklad()
{
    int totally { delitel() };
    int summa { totally / 2};
    return summa;
}

int crypto ()
{
    int bitcoin { delitel() };
    int bitcoin_investment { bitcoin / 2 };
    return bitcoin_investment;
}

int main()
{
    std::cout << "Итоговое распределение ваших финансов:" << "\n";
    std::cout << "Общая сумма на остатке -" << " " << calculate() << money() << "\n";
    std::cout << "Сумма на инвестиции -" << " " << delitel() << money() << "\n";
    std::cout << "Сумма на вклад - " << " " << vklad() << money() << "\n";
    std::cout << "Сумма на криптовалютные инвестиции - " << " " << crypto()
    << money() << "\n";
    return 0;
}
