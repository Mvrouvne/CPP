#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain& old_obj);
		Brain&	operator=(const Brain& old_obj);
		~Brain();
		void	set_ideas(std::string i);
		std::string	get_ideas(int index);
		
};

#endif