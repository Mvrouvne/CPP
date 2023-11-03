#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	// std::cout << "Character Default constructor called" << std::endl;
	for(int x = 0; x < 4; x++)
	{
		inventory[x] = NULL;
	}
	head = NULL;
}

Character::Character(const Character& old_obj)
{
	// std::cout << "Character Copy constructor called" << std::endl;
	*this = old_obj;
}

Character&	Character::operator=(const Character& old_obj)
{
	if (this != &old_obj)
	{
		this->name = old_obj.name;
		for(int x = 0; x < 4; x++)
		{
			if (old_obj.inventory[x])
				this->inventory[x] = old_obj.inventory[x]->clone();
			else
			this->inventory[x] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	// std::cout << "Character Destructor called" << std::endl;
	List* tmp = NULL;
	while (head)
	{
		tmp = head;
		head = head->next;
		delete tmp->addresse;
		delete	tmp;
	}
	for(int x = 0; x < 4; x++)
	{
		if (inventory[x])
		{
			delete inventory[x];
		}
	}
}

std::string const & Character::getName() const
{
	return name;
}

void	Character::equip(AMateria* m)
{
	for(int x = 0; x < 4; x++)
	{
		if (!inventory[x])
		{
			inventory[x] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	for(int x = 0; x < 4; x++)
	{
		if (x == idx && inventory[x])
		{
			ft_lstadd_back(&head, ft_lstnew(inventory[x]));
			inventory[x] = NULL;
			break;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}

Character::Character(std::string name)
{
	// std::cout << "Character Parametrized constructor called" << std::endl;
	head = NULL;
	for(int x = 0; x < 4; x++)
	{
		inventory[x] = NULL;
	}
	this->name = name;
}

void	Character::get_inventory()
{
	for(int x = 0; x < 4; x++)
	{
		if (inventory[x])
			std::cout << inventory[x]->getType() << std::endl;
	}
}

List	*ft_lstnew(AMateria* address)
{
	List	*adrs;

	adrs = NULL;
	adrs = new List;
	adrs->addresse = address;
	adrs->next = NULL;

	return adrs;
}

List	*ft_lstlast(List* lst)
{
	if (!lst)
		return lst;
	while (lst)
	{
		if (!lst->next)
			return lst;
		lst = lst->next;
	}
	return 0;
}

void	ft_lstadd_back(List** lst, List* new_node)
{
	if (!lst || !new_node)
		return ;
	if (!*lst)
		*lst = new_node;
	else
		ft_lstlast(*lst)->next = new_node;
}
