#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& old_obj)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = old_obj;
}

WrongCat&	WrongCat::operator=(const WrongCat& old_obj)
{
	if (this != &old_obj)
	{
		this->type = old_obj.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCats don't bark" << std::endl;
}

std::string	WrongCat::getType() const
{
	return this->type;
}
