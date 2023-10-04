#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

std::string& const	Weapon::getType()
{
	return (type);
}

void    Weapon::setType(std::string type)
{
	this->type = type;
}
