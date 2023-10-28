#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
    type = "Cat";
	CatBrain = new Brain();
}

Cat::Cat(const Cat& old_obj)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = old_obj;
}

Cat&	Cat::operator=(const Cat& old_obj)
{
	delete CatBrain;
	if (this != &old_obj)
	{
		this->type = old_obj.type;
		this->CatBrain = new Brain(*this->CatBrain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete CatBrain;
}

void    Cat::makeSound() const
{
    std::cout << "Cats don't bark" << std::endl;
}

std::string	Cat::getType() const
{
	return this->type;
}
