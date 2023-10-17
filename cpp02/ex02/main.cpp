#include "Fixed.hpp"

// int	main()
// {
// 	// Fixed a(4);
// 	// Fixed b(2);
// 	// Fixed c = a * b;

// 	// std::cout << c << std::endl;
// 	// Fixed a(100);
// 	// std::cout << ((a).getRawBits()) << std::endl;
// 	// std::cout << ((a).getRawBits()) << std::endl;
// 	// std::cout << ((a).getRawBits()) << std::endl;
// 	Fixed const a(Fixed (5.05f) * Fixed(2));
// 	std::cout << a << std::endl;
// }

int	main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
