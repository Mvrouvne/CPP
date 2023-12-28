template<typename T>
void	easyfind(T& is_find, int to_find)
{
	typename T::iterator it = std::find(is_find.begin(), is_find.end(), to_find);
	if (it == is_find.end())
		throw std::invalid_argument("Occurence Not Found!");
	std::cout << "Occurence found in index: " << std::distance(is_find.begin(), it) << std::endl;
}
