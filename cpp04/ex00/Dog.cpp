#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& old_obj)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = old_obj;
}

Dog&	Dog::operator=(const Dog& old_obj)
{
	if (this != &old_obj)
	{
		this->type = old_obj.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Dogs don't meow" << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}
