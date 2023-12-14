template<typename T>
void	easyfind(T& is_find, int to_find)
{
	int	x = 0;
	for (typename T::iterator it = is_find.begin(); it != is_find.end(); it++)
	{
		if (*it == to_find)
		{
			std::cout << "Occurence found in index: " << x << std::endl;
			return ;
		}
		x++;
	}
	throw std::invalid_argument("Occurence Not Found!");
}
