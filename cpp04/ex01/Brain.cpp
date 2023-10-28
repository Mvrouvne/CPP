#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& old_obj)
{
	std::cout << "Brain Copy Costructor called" << std::endl;
	*this = old_obj;
}

Brain&	Brain::operator=(const Brain& old_obj)
{
	if (this != &old_obj)
	{
		this->ideas = old_obj.ideas;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}