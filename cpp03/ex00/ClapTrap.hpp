#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		ClapTrap();
		ClapTrap(const ClapTrap& old_obj);
		ClapTrap&	operator=(const ClapTrap& old_obj);
		~ClapTrap();
		ClapTrap(std::string name);
		std::string	name;
		int			Hit_Points;
		int			Energy_Points;
		int			Attack_Damage;
	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif