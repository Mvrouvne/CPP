#include "Fixed.hpp"

const int	Fixed::fbits = 8;

Fixed::Fixed()
{
	fxp = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& old_obj)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &old_obj)
		// fxp = old_obj.fxp;
		*this = old_obj;
		
}

Fixed& Fixed::operator=(const Fixed& old_obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &old_obj)
		// fxp = old_obj.fxp;
		fxp = old_obj.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->fxp = raw;
}

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return fxp;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called" << std::endl;
    fxp = x << fbits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
    fxp = f * (1 << fbits);
}

float   Fixed::toFloat() const
{
    float   f;

    f = fxp >> fbits;
	// std::cout << "float: " << f << std::endl
    return f;
}

int Fixed::toInt() const
{
    int i;

    i = fxp >> fbits;
    return i;
}

std::ostream&	operator << (std::ostream& output, const Fixed& obj)
{
	output << obj.toFloat();

	return output;
}
