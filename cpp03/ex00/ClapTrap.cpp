#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	Hit_Points = 10;
	Energy_Points = 10;
	Attack_Damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& old_obj)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &old_obj)
		*this = old_obj;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& old_obj)
{
	if (this != &old_obj)
	{
		this->name = old_obj.name;
		this->Hit_Points = old_obj.Hit_Points;
		this->Energy_Points = old_obj.Energy_Points;
		this->Attack_Damage = old_obj.Attack_Damage;
	}
	return *this;
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
	if (Hit_Points > 0 && Energy_Points > 0)
	{
		Energy_Points -= 1;
		Hit_Points -= 1;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_Damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
		amount -= 0;
	std::cout << "ClapTrap took damage of " << amount << " hit points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy_Points > 0)
	{
		Energy_Points -= 1;
		amount += 1;
	}
	std::cout << "ClapTrap repaired itself and gets " << amount << " hit points back" << std::endl;
}
