#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap& old_obj);
		ScavTrap&	operator=(const ScavTrap& old_obj);
		~ScavTrap();
		ScavTrap(std::string name);
		void	attack(const std::string& target);
		void	guardGate();
};

#endif