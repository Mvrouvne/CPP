#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	Hit_Points = 10;
	Energy_Points = 10;
	Attack_Damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& old_obj)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
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
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Parameterized constructor called" << std::endl;
	Hit_Points = 10;
	Energy_Points = 10;
	Attack_Damage = 0;
	this->name = name;
}

void	ClapTrap::attack(const std::string& target)
{
	if (Energy_Points > 0)
	{
		Energy_Points -= 1;
		Hit_Points -= Attack_Damage;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_Damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_Points > 0)
	{
		Hit_Points -= amount;
		std::cout << "ClapTrap took damage of " << amount << " hit points!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy_Points > 0)
	{
		Energy_Points -= 1;
		Hit_Points += amount;
		std::cout << "ClapTrap repaired itself and gets " << amount << " hit points back" << std::endl;
	}
}

void	ClapTrap::get_HitPoints()
{
	std::cout << Hit_Points << std::endl;
}

void	ClapTrap::get_EnergyPoints()
{
	std::cout << Energy_Points << std::endl;
}
void	ClapTrap::get_AttackPoints()
{
	std::cout << Attack_Damage << std::endl;
}
