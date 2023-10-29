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
		void	set_ideas(std::string i)
		{
			for(int x = 0; x < 100; x++)
			{
				ideas[x] = i;
			}
		}
		std::string	get_ideas(int index)
		{
			return ideas[index];
		}
};

#endif