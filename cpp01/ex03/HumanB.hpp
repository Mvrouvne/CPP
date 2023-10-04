#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon*		weapon;
	public:
		void	attack();
        HumanB(std::string name);
        void    setWeapon(Weapon weapon1);
};

#endif