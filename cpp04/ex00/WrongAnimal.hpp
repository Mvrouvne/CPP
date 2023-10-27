#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& old_obj);
		WrongAnimal&	operator=(const WrongAnimal& old_obj);
		~WrongAnimal();
		void	makeSound() const;
		std::string	getType() const;
};

#endif