#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		std::string name;
		AMateria	*inventory[4];
	public:
		Character();
		Character(const Character& old_obj);
		Character&	operator=(const Character& old_obj);
		~Character();
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif