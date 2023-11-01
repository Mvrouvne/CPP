#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
	
		AMateria(std::string const & type);
		AMateria();
		AMateria(const AMateria& old_obj);
		AMateria&	operator=(const AMateria& old_obj);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif