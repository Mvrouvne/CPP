#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T1, typename T2>
void	iter(T1 arr_add, int len, T2 arr_fun)
{
	for (int x = 0; x < len; x++)
		arr_fun(arr_add[x]);
}

#endif