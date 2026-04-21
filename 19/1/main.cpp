#include <iostream>
#include <cstdlib>

int main()
{
	int x{}; std::cin >> x;
	std::cout << "It's x, size: " << sizeof(x) << "\n";
	int y{}; std::cin >> x;
	std::cout << "It's y, size: " << sizeof(y) << "\n";
	std::cout << "The sum of sizes: " << sizeof(x) + sizeof(y) << "\n";
	return EXIT_SUCCESS;
}
