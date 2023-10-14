#include "Zombie.hpp"

int	main()
{
	Zombie* obj;
	
	obj = zombieHorde(0, "Mark");
	for(int x = 0; x < 1; x++)
		obj[x].announce();
	delete[] obj;
}
