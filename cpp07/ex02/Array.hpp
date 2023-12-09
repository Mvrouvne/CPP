#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class	Array
{
	private:
		T* array;
		unsigned int n;
	public:
		Array();
		Array(unsigned int n);
		Array(Array& old_obj);
		Array& operator=(Array& old_obj);
		unsigned int get_n() const
		{
			return n;
		}
};

#include "Array.tpp"

#endif