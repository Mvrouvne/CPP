#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& old_obj);
		Cat&	operator=(const Cat& old_obj);
		~Cat();
		void	makeSound() const;
		std::string getType() const;
};

#endif