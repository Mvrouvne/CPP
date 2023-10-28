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
	int	x = 0;
	if (this != &old_obj)
	{
		while(x < 100)
		{
			this->ideas[x] = old_obj.ideas[x];
			x++;
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}