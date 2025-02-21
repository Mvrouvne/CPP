#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain*	DogBrain;
	public:
		Dog();
		Dog(const Dog& old_obj);
		Dog&	operator=(const Dog& old_obj);
		~Dog();
		void	makeSound() const;
		std::string	getType() const;
		void	setDog(std::string i);
		std::string getDog(int index);
};

#endif