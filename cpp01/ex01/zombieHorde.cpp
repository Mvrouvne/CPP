#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	obj;
	int		x;
	
	x = 0;
	obj = new Zombie[N];
	while(x < N)
	{
		obj[x] = Zombie(name);
		obj[x].announce();
		x++;
	}
	return (obj);
}
