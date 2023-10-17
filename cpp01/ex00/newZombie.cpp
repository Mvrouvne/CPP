#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	obj = new Zombie(name);
	if (!obj)
		exit(1);

	return (obj);
}
