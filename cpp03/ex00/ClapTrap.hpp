#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		std::string	name;
		int			Hit_Points;
		int			Energy_Points;
		int			Attack_Damage;
	public:
		ClapTrap*	target_obj;
		ClapTrap();
		ClapTrap(const ClapTrap& old_obj);
		ClapTrap&	operator=(const ClapTrap& old_obj);
		~ClapTrap();
		ClapTrap(std::string name);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	get_HitPoints();
		void	get_EnergyPoints();
		void	get_AttackPoints();
};

#endif