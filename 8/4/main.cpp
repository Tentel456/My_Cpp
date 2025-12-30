#include <iostream>
#include <cstdlib>

int calculate_percent(int amount, int percent);

int main()
{
    std::cout << calculate_percent(1000, 50) << "\n";
    return EXIT_SUCCESS;
}

int calculate_percent(int amount, int percent)
{
    return amount / 100 * percent;
}
