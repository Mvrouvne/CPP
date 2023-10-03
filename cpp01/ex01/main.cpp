#include "Zombie.hpp"

int	main()
{
	Zombie* obj;
	
	obj = zombieHorde(5, "Mark");
	for(int x = 0; x < 5; x++)
		obj[x].announce();
	delete[] obj;
}
