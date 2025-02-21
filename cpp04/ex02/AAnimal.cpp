#include "AAnimal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& old_obj)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = old_obj;
}

Animal&	Animal::operator=(const Animal& old_obj)
{
	if (this != &old_obj)
	{
		this->type = old_obj.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

// void	Animal::makeSound() const
// {
// 	std::cout << "Animals don't speak" << std::endl;
// }

std::string	Animal::getType() const
{
	return this->type;
}