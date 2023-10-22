#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	Hit_Points = 10;
	Energy_Points = 10;
	Attack_Damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{

}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_Damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDammage(unsigned int amount)
{

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap repaired itself and gets " << amount << " hit points back" << std::endl;
}
