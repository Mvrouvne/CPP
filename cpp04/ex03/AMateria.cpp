#include "AMateria.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& old_obj)
{
	// std::cout << "AMateria Copy constructor called" << std::endl;
	*this = old_obj;
}

AMateria& AMateria::operator=(const AMateria& old_obj)
{
	if (this != &old_obj)
	{
		this->type = old_obj.type;
	}
	return *this;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	// std::cout << "Parametrized constructor called" << std::endl;
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return type;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "KJH" << std::endl;
}