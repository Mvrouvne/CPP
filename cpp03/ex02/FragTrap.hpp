#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap& old_obj);
		FragTrap&	operator=(const FragTrap& old_obj);
		~FragTrap();
		FragTrap(std::string name);
		void    highFiveGuys(void);
};

#endif