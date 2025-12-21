#include <iostream>

int pos()
{
    int x {};
    int y {};
    std::cout << "Введите вашу зарплату:" << "\n";
    std::cin >> x;
    std::cout << "Введите ваши траты:" << "\n";
    std::cin >> y;
    int sum {x+y};
    int raz {x-y};
    char symbol {'$'};
    char procents {'%'};
    char plusminus {'~'};
    std::cout << "Ваша Зарплата (USDT):" << x << symbol << "\n";
    std::cout << "Ваши траты:" << y << symbol << "\n";
    std::cout << "Остаток:" << raz << symbol << "\n";
    return raz;
}

int main()
{
    int ostatok {pos()};
    char symbol {'$'};
    char procents {'%'};
    char plusminus {'~'};
    std::cout << "Добро пожаловать в распределение финансов, ваш остаток:" << "\n";
    std::cout << ostatok << "\n";
    int safe {ostatok * 0.2};
    int boost {safe * 1.4};
    int procent = 40;
    std::cout << "На сбережения лучше отложить" << safe << symbol << "\n";
    std::cout << "Их можно положить в акции, облигации, крипту, предпологаемая годовая доходность:" 
    << procent << procents << plusminus << boost << symbol;
    return 0;
}
