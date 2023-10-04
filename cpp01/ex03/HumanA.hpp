#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;
	public:
		void	attack();
		HumanA(std::string name1, Weapon& weapon1):name(name1), weapon(weapon1){};
};

#endif