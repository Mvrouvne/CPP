#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	obj;
	int		x;
	
	x = 0;
	if (N <= 0)
	{
		std::cout << "N can't be negative or 0" << std::endl;
		exit (1);
	}
	obj = new Zombie[N];
	while(x < N)
	{
		obj[x].get_name(name);
		x++;
	}
	return (obj);
}
