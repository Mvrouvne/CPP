#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure Default constructor called" << std::endl;
	type = "cure";
}

Cure::Cure(const Cure& old_obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = old_obj;
}

Cure&	Cure::operator=(const Cure& old_obj)
{
	if (this != &old_obj)
	{

	}
}

Cure::~Cure()
{
	std::cout << "Cure default constructor called" << std::endl;
}