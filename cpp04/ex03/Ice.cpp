#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice Default constructor called" << std::endl;
	type = "ice";
}

Ice::Ice(const Ice& old_obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old_obj;
}

Ice&	Ice::operator=(const Ice& old_obj)
{
	if (this != &old_obj)
	{
		this->type = old_obj.type;
	}
}

Ice::~Ice()
{
	std::cout << "Ice default constructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	Ice	*ice_obj = new Ice();

	return ice_obj;
}