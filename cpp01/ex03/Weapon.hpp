#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		std::string&	const getType();
		void			setType(std::string type);
		Weapon(std::string type);
};

#endif