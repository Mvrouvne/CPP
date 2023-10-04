#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon weapon1)
{
	this->weapon = &weapon1;
}

HumanB::HumanB(std::string name)
{
	weapon = NULL;
	this->name = name;
}

void	HumanB::attack()
{
	if (!weapon)
	{
		std::cout << "HumanB doesn't have a weapon!" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
