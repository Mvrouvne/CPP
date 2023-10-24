#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	Hit_Points = 100;
	Energy_Points = 100;
	Attack_Damage = 30;
}

FragTrap::FragTrap(const FragTrap& old_obj)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	if (this != &old_obj)
		*this = old_obj;
}

FragTrap&	FragTrap::operator=(const FragTrap& old_obj)
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Parameterized FragTrap constructor called" << std::endl;
	Hit_Points = 100;
	Energy_Points = 100;
	Attack_Damage = 30;
	this->name = name;
}

void	FragTrap::highFiveGuys()
{
	std::cout << "High Five!" << std::endl;
}
