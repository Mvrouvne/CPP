#include "Serializer.hpp"

Serializer::Serializer()
{
	// std::cout << "Serializer Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer& old_obj)
{
	*this = old_obj;
}

Serializer&	Serializer::operator=(const Serializer& old_obj)
{
	(void)old_obj;
	return *this;
}

Serializer::~Serializer()
{
	// std::cout << "Serialized Destructot called" << std::endl;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
