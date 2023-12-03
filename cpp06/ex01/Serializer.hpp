#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
// #include <stdint.h>

struct	Data
{
	int		int_data;
	char	char_data;
	double	double_data;
};

class   Serializer
{
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif