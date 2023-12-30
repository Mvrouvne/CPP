#include "PmergeMe.hpp"

template <typename T>
void	merge(T leftVec, T rightVec, T& BigVec)
{
	int	left_size = BigVec.size() / 2;
	int	right_size = BigVec.size() - left_size;
	int x = 0, l = 0, r = 0;
	while (l < left_size && r < right_size)
	{
		if (leftVec[l] < rightVec[r])
		{
			BigVec[x] = leftVec[l];
			x++;
			l++;
		}
		else
		{
			BigVec[x] = rightVec[r];
			x++;
			r++;
		}
	}
	while (l < left_size)
	{
		BigVec[x] = leftVec[l];
		x++;
		l++;
	}
	while (r < right_size)
	{
		BigVec[x] = rightVec[r];
		x++;
		r++;
	}
}

template <typename T>
void	mergeSort(T& BigVec)
{
	int	length = BigVec.size();
	if (length <= 1)
		return ;
	int	middle = length / 2;
	T leftVec(middle);
	T rightVec(length - middle);
	int	x = 0, y = 0;
	for (; x < length; x++)
	{
		if (x < middle)
			leftVec[x] = BigVec[x];
		else
		{
			rightVec[y] = BigVec[x];
			y++;
		}
	}
	mergeSort(leftVec);
	mergeSort(rightVec);
	merge(leftVec, rightVec, BigVec);
}

template <typename T>
void	merge_insert_algo(T& container, T& BigVec)
{
	// T BigVec;
	T SmallVec;
	// splitting big and small nums as pairs
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
	// merge sort
	mergeSort(BigVec);
	// insertion sort
	for (typename T::iterator SmallVec_it = SmallVec.begin(); SmallVec_it != SmallVec.end(); SmallVec_it++)
		BigVec.insert(std::lower_bound(BigVec.begin(), BigVec.end(), *SmallVec_it), *SmallVec_it);
}

void	parse_push(std::string to_sort)
{
	std::vector<int> MyVec;
	std::vector<int> BigVec;
	std::deque<int>	MyDeque;
	std::deque<int>	BigDeque;
	std::string to_push;
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
	clock_t start = clock();
	merge_insert_algo(MyVec, BigVec);
	clock_t end = clock();
	std::cout << "After: ";
	for (std::vector<int>::iterator BigVec_it = BigVec.begin(); BigVec_it != BigVec.end(); BigVec_it++)
	{
		std::cout << *BigVec_it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << MyVec.size() << " elements with std::vector: " << (double)(end - start) / 1000 << " ms" << std::endl;
	clock_t start1 = clock();
	merge_insert_algo(MyDeque, BigDeque);
	clock_t end1 = clock();
	std::cout << "Time to process a range of " << MyVec.size() << " elements with std::deque: " << (double)(end1 - start1) / 1000 << " ms" << std::endl;
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
		parse_push(to_sort);
	}
}
