#include "easyfind.hpp"

int	main()
{
	std::vector<int> vec;
	for (int i(0); i < 5; i++)
		vec.push_back(i + 1);
	try
	{
		easyfind(vec, 3);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
