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
		
	}
}

Ice::~Ice()
{
    std::cout << "Ice default constructor called" << std::endl;
}