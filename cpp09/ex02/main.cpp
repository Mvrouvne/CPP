#include "PmergeMe.hpp"

template <typename T>
void	merge_insert_algo(T& container)
{
	T BigVec;
	T SmallVec;
	// checking for the big numbers in pairs
	for (typename T::iterator it = container.begin(); it != container.end(); it+=2)
	{
		if (it + 1 == container.end())
		{
			BigVec.push_back(*it);
			break ;
		}
		BigVec.push_back(*(std::max_element(it, it + 2)));
		SmallVec.push_back(*(std::min_element(it, it + 2)));
	}
	std::sort(BigVec.begin(), BigVec.end());
	for (typename T::iterator SmallVec_it = SmallVec.begin(); SmallVec_it != SmallVec.end(); SmallVec_it++)
		BigVec.insert(std::lower_bound(BigVec.begin(), BigVec.end(), *SmallVec_it), *SmallVec_it);
	for (typename T::iterator BigVec_it = BigVec.begin(); BigVec_it != BigVec.end(); BigVec_it++)
	{
		std::cout << *BigVec_it << " ";
	}
}

void	insertion_sort_vector(std::string to_sort)
{
	std::vector<int> MyVec;
	std::deque<int>	MyDeque;
	std::string to_push;
	// int	pairs = 0;
	std::cout << "Before: " << to_sort << std::endl;
	for (int x = 0; to_sort[x]; x++)
	{
		if (to_sort[x] != ' ')
			to_push = to_push + to_sort[x];
		else
		{
			MyVec.push_back(atoi(to_push.c_str()));
			MyDeque.push_back(atoi(to_push.c_str()));
			to_push.erase(0, to_push.length());
		}
	}
	std::cout << "Vector: ";
	merge_insert_algo(MyVec);
	std::cout << std::endl;
	std::cout << "Deque: ";
	merge_insert_algo(MyDeque);
}

int	main(int ac, char** av)
{
	if (ac > 1)
	{
		std::string to_sort;
		for (int x = 1; av[x]; x++)
		{
			for (int y = 0; av[x][y]; y++)
			{
				if (!isdigit(av[x][y]) && av[x][y] != ' ')
					print_err("invalid argument");
				else
					to_sort = to_sort + av[x][y];
			}
			to_sort = to_sort + ' ';
		}
		insertion_sort_vector(to_sort);
	}
}
