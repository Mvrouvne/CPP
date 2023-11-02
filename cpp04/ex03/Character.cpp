#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	// std::cout << "Character Default constructor called" << std::endl;
	for(int x = 0; x < 4; x++)
	{
		inventory[x] = NULL;
	}
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
			this->inventory[x] = old_obj.inventory[x];
		}
	}
	return *this;
}

Character::~Character()
{
	// std::cout << "Character Destructor called" << std::endl;
	for(int x = 0; x < 4; x++)
	{
		if (inventory[x])
			delete inventory[x];
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
	// List	hold;

	for(int x = 0; x < 4; x++)
	{
		if (x == idx && inventory[x])
		{
			// inventory[x] = hold.addresse;
			// hold.addresse = ne
			// inventory[x] = NULL;
			break;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] && idx >= 0 && idx < 4)
		inventory[idx]->use(target);
}

Character::Character(std::string name)
{
	// std::cout << "Character Parametrized constructor called" << std::endl;
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