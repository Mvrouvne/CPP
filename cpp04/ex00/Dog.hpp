#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& old_obj);
		Dog&	operator=(const Dog& old_obj);
		~Dog();
		void	makeSound() const;
		std::string	getType() const;
};

#endif