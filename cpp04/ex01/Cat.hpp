#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain*	CatBrain;
	public:
		Cat();
		Cat(const Cat& old_obj);
		Cat&	operator=(const Cat& old_obj);
		~Cat();
		void	makeSound() const;
		std::string getType() const;
};

#endif