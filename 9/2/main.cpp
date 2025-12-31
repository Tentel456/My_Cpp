#include <iostream>
#include <cstdlib>

int GetInteger();

int main()
{
	int x{ GetInteger() };
	int y{ GetInteger() };
	std::cout << x << "+" << y << "=" << x + y << "\n";
	return EXIT_SUCCESS;
}
