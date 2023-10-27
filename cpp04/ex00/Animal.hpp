#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& old_obj);
		Animal&	operator=(const Animal& old_obj);
		~Animal();
		virtual void	makeSound() const;
		virtual std::string	getType() const;
};

#endif