#include "Fixed.hpp"

const int	Fixed::fbits = 8;

Fixed::Fixed()
{
	fxp = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& old_obj)
{
	// std::cout << "Copy constructor called" << std::endl;
	if (this != &old_obj)
		*this = old_obj;
}

Fixed& Fixed::operator=(const Fixed& old_obj)
{
	// std::cout << "Copy assignment operator called" << std::endl;
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
	// std::cout << "getRawBits member function called" << std::endl;
	return fxp;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int x)
{
	// std::cout << "Int constructor called" << std::endl;
    fxp = x << fbits;
}

Fixed::Fixed(const float f)
{
	// std::cout << "Float constructor called" << std::endl;
    fxp = roundf(f * (1 << fbits));
}

float   Fixed::toFloat() const
{
    float   f;

    f = fxp / (float)(1 << fbits);
    return f;
}

int Fixed::toInt() const
{
    int i;

    i = fxp / (1 << fbits);
    return i;
}

std::ostream&	operator << (std::ostream& output, const Fixed& obj)
{
	output << obj.toFloat();

	return output;
}

bool	Fixed::operator < (const Fixed& obj) const
{
	return (this->fxp < obj.fxp);
}

bool	Fixed::operator > (const Fixed& obj) const
{
	return (this->fxp > obj.fxp);
}

bool	Fixed::operator <= (const Fixed& obj)
{
	return (this->fxp <= obj.fxp);
}

bool	Fixed::operator >= (const Fixed& obj)
{
	return (this->fxp >= obj.fxp);
}

bool	Fixed::operator == (const Fixed& obj)
{
	return (this->fxp == obj.fxp);
}

bool	Fixed::operator != (const Fixed& obj)
{
	return (this->fxp != obj.fxp);
}

Fixed& Fixed::operator+(const Fixed& old_obj)
{
	this->fxp = this->fxp + old_obj.fxp;
	return *this;
}

Fixed& Fixed::operator-(const Fixed& old_obj)
{
	this->fxp = this->fxp - old_obj.fxp;
	return *this;
}

Fixed Fixed::operator*(const Fixed& old_obj)
{
	this->fxp = (this->fxp * old_obj.fxp) >> fbits;
	return *this;
}

Fixed Fixed::operator/(const Fixed& old_obj)
{
	this->fxp = (this->fxp / old_obj.fxp) << fbits;
	return *this;
}

Fixed	Fixed::operator++(int) // Post increment i++
{
	Fixed i(*this);
	this->fxp++;
	return i;
}

Fixed&	Fixed::operator++() // Pre increment ++i
{
	fxp++;
	return *this;
}

Fixed	Fixed::operator--(int) // Post decrement i--
{
	Fixed i(*this);
	this->fxp--;
	return i;
}

Fixed&	Fixed::operator--() // Pre decrement --i
{
	fxp--;
	return *this;
}

Fixed&	Fixed::min(Fixed& r1, Fixed& r2)
{
	if (r1 < r2)
		return r1;
	return r2;
}

const Fixed&	Fixed::min(const Fixed& r1, const Fixed& r2)
{
	if (r1 < r2)
		return r1;
	return r2;
}

Fixed&	Fixed::max(Fixed& r1, Fixed& r2)
{
	if (r1 > r2)
		return r1;
	return r2;
}

const Fixed& Fixed::max(const Fixed& r1, const Fixed& r2)
{
	if (r1 > r2)
		return r1;
	return r2;
}
