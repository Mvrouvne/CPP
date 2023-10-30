#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& old_obj);
		Cure&	operator=(const Cure& old_obj);
		~Cure();
		AMateria*	clone() const;
};

#endif