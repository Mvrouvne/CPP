#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <exception>

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
		Array&	operator=(Array& old_obj);
		int&	operator[](unsigned int index)
		{
			if (index >= n)
				throw indexOutofBoudsException();
			return array[index];
		}
		~Array()
		{
			delete[] array;
		}
		int	size() const
		{
			return n;
		}
		class	indexOutofBoudsException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "index is out of bounds!";
				}
		};
};

#include "Array.tpp"

#endif