#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria*	materiasource[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& old_obj);
		MateriaSource& operator=(const MateriaSource& old_obj);
		~MateriaSource();
		void	learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const & type);
};

#endif