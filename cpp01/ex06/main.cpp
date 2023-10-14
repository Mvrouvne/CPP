#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl obj;

		obj.complain(av[1]);
	}
}