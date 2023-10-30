#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& old_obj);
		Ice&	operator=(const Ice& old_obj);
		~Ice();
		AMateria*	clone() const;
};

#endif