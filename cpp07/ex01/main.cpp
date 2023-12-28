#include "iter.hpp"

template<typename T>
void print(T& a)
{
	std::cout << a << std::endl;
}

int	main()
{
	// std::string arr[3] = {"Hello", "Hey", "Hi"};
	// iter(arr, 3, print<std::string>);
	// std::string arr[3] = {"Hello", "Hey", "Hi"};
	// iter(arr, 3, arr_function<std::string>);
	// int arr[3] = {3, 2, 1};
	// iter(arr, 3, arr_fun<int>);
	int arr[3] = {3, 2, 1};
	iter(arr, 3, print<const int>);
}
