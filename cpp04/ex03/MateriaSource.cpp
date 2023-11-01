#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& old_obj)
{
	// std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = old_obj;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& old_obj)
{
	if(this != &old_obj)
	{
		for(int x = 0; x < 4; x++)
		{
			this->materiasource[x] = old_obj.materiasource[x];
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource Destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	for(int x = 0; x < 4; x++)
	{
		if (!materiasource[x])
		{
			materiasource[x] = materia;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for(int x = 0; x < 4; x++)
	{
		if (type == materiasource[x]->getType())
		{
			return (materiasource[x]->clone());
		}
	}
	return 0;
}