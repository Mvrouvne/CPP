#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed const b( 10 ); Fixed const c( 42.42f ); Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0; 
	// float f = 1234.4321f;

	// int fxp = f * (1 << 8);
	// float x = fxp >> 8;
	// std::cout << x << std::endl;

	// int b = 10;
	// int x = b << 8;


	// float f = x >> 8;
	// std::cout << f << std::endl;
}
