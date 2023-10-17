#include "Zombie.hpp"

void	Zombie::get_name(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " is Destroyed" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
