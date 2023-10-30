#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(const Character& old_obj)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = old_obj;
}

Character&	Character::operator=(const Character& old_obj)
{
	if (this != &old_obj)
	{
		this->name = old_obj.name;
	}
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
}

std::string const & Character::getName() const
{
	return name;
}