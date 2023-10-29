#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& old_obj)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	this->type = "WrongAnimal";
	*this = old_obj;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& old_obj)
{
	if (this != &old_obj)
	{
		this->type = old_obj.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimals don't speak" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}