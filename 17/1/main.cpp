#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <climits>

int main()
{
	std::cout << "C++ Standard Version: " << __cplusplus << std::endl;
	std::cout << "Size of bite" << CHAR_BIT << " bits" << std::endl;
	return EXIT_SUCCESS;
}
