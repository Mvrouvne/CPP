#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <ostream>
#include <cmath>

class	Fixed
{
	private:
		int					fxp;
		static const int	fbits;
	public:
		Fixed();
		Fixed(const Fixed& old_obj);
		Fixed& operator=(const Fixed& old_obj);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed(const int x);
		Fixed(const float f);
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator < (const Fixed& obj) const;
		bool	operator > (const Fixed& obj) const;	
		bool	operator <= (const Fixed& obj);	
		bool	operator >= (const Fixed& obj);	
		bool	operator == (const Fixed& obj);
		bool	operator != (const Fixed& obj);
		Fixed	operator+(const Fixed& old_obj);
		Fixed	operator-(const Fixed& old_obj);
		Fixed	operator*(const Fixed& old_obj);
		Fixed	operator/(const Fixed& old_obj);
		Fixed	operator++(int);
		Fixed&	operator++();
		Fixed	operator--(int);
		Fixed&	operator--();
		static Fixed&	min(Fixed& r1, Fixed& r2);
		const static Fixed&	min(const Fixed& r1, const Fixed& r2);
		static Fixed&	max(Fixed& r1, Fixed& r2);
		const static Fixed&	max(const Fixed& r1, const Fixed& r2);
};

std::ostream&	operator << (std::ostream& output, const Fixed& obj);

#endif