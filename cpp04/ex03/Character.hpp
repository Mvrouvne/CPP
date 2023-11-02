#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

struct	List
{
	AMateria*		addresse;
	struct List*	next;
};

class	Character : public ICharacter
{
	private:
		std::string name;
		AMateria*	inventory[4];
		List*		head;
	public:
		Character();
		Character(const Character& old_obj);
		Character&	operator=(const Character& old_obj);
		virtual ~Character();
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		Character(std::string name);
		void get_inventory();
};


List	*ft_lstnew(AMateria* address);
List	*ft_lstlast(List* lst);
void	ft_lstadd_back(List** lst, List* new_node);

#endif