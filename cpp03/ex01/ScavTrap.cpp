#include "ScarvTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	Hit_Points = 100;
	Energy_Points = 50;
	Attack_Damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& old_obj)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	if (this != &old_obj)
		*this = old_obj;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& old_obj)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
	Hit_Points = 100;
	Energy_Points = 50;
	Attack_Damage = 20;
	this->name = name;
}

void	ScavTrap::attack(const std::string& target)
{
	if (Energy_Points > 0 && Hit_Points > 0)
	{
		Energy_Points -= 1;
		Hit_Points -= Attack_Damage;
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << Attack_Damage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}