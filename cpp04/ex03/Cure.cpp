#include "Cure.hpp"

Cure::Cure()
{
	// std::cout << "Cure Default constructor called" << std::endl;
	type = "cure";
}

Cure::Cure(const Cure& old_obj)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = old_obj;
}

Cure&	Cure::operator=(const Cure& old_obj)
{
	if (this != &old_obj)
	{
		this->type = old_obj.type;
	}
	return *this;
}

Cure::~Cure()
{
	// std::cout << "Cure default constructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	Cure	*cure_obj = new Cure();

	return cure_obj;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}