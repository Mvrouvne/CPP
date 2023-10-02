#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << name << " is Destroyed" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
