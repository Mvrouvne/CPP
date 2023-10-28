#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& old_obj);
		Animal&	operator=(const Animal& old_obj);
		virtual ~Animal();
		virtual void	makeSound() const = 0;
		virtual std::string	getType() const;
};

#endif