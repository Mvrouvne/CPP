#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class	Fixed
{
	private:
		int					fxp;
		static const int	fbits;
	public:
		Fixed();
		Fixed(Fixed& old_obj);
		Fixed& operator=(Fixed& old_obj);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif