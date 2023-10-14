#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <ostream>

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
		bool	operator < (const Fixed& obj);
};

std::ostream&	operator << (std::ostream& output, const Fixed& obj);

#endif