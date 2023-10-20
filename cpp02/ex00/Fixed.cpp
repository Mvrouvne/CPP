#include "Fixed.hpp"

const int	Fixed::fbits = 8;

Fixed::Fixed()
{
	fxp = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& old_obj)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &old_obj)
		*this = old_obj;
		
}
Fixed& Fixed::operator=(Fixed& old_obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &old_obj)
		fxp = old_obj.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->fxp = raw;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fxp;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
