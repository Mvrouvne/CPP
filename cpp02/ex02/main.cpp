#include "Fixed.hpp"

int	main()
{
	Fixed a(3);
	Fixed b(2);
	Fixed c = a * b;

	std::cout << c << std::endl;
}
