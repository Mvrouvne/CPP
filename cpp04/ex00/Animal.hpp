#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& old_obj);
		Animal&	operator=(const Animal& old_obj);
		~Animal();
		void	makeSound() const;
		std::string	getType() const;
};

#endif