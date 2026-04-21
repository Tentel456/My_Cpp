#include <iostream>
#include <cstdlib>

int main()
{
	signed int x{}; std::cin >> x;
	std::cout << "The value of x is - " << x << " and it's size is - " << sizeof(x) << " bytes\n";
	signed int y{}; std::cin >> y;
	std::cout << "The value of y is - " << y << " and it's size is - " << sizeof(y) << " bytes\n";
	std::cout << "The sum of sizes is - " << sizeof(x) + sizeof(y) << " bytes\n";
	return EXIT_SUCCESS;
}
