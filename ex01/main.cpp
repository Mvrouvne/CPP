#include "PhoneBook.hpp"
#include "Contacts.hpp"

int	check_number(std::string index)
{
	int	x = 0;

	while (index[x])
	{
		if (!isdigit(index[x]))
			return (0);
		x++;
	}
	return (1);
}

void	PhoneBook::print_contacts(int n)
{
	int	x = 0;

	std::cout << "     index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	while (x < n)
	{
		std::cout << std::setw(10) << x << "|";
		if (contacts[x].getFirstname().size() > 10)
			std::cout << std::setw(10) << contacts[x].getFirstname().substr(0, 9) + ".";
		else 
			std::cout << std::setw(10) << contacts[x].getFirstname();
		std::cout << "|";
		if (contacts[x].getLastname().size() > 10)
			std::cout << std::setw(10) << contacts[x].getLastname().substr(0, 9) + ".";
		else
			std::cout << std::setw(10) << contacts[x].getLastname();
		std::cout << "|";
		if (contacts[x].getNickname().size() > 10)
			std::cout << std::setw(10) << contacts[x].getNickname().substr(0, 9) + ".";
		else
			std::cout << std::setw(10) << contacts[x].getNickname();
		std::cout << "|" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		x++;
	}
}

void	Contacts::set_contacts(void)
{
	std::cout << "Enter first name: " << std::endl;
	std::cin >> first_name;
	std::cout << "Enter last name: " << std::endl;
	std::cin >> last_name;
	std::cout << "Enter nickname: " << std::endl;
	std::cin >> nickname;
	std::cout << "Enter phone number: " << std::endl;
	std::cin >> phone_number;
	std::cout << "Enter darkest secret: " << std::endl;
	std::cin >> darkest_secret;
}

void	PhoneBook::save_phonebook(int n)
{
	contacts[n].set_contacts();
}

int	main()
{
	PhoneBook	phonebook_obj;
	std::string command;
	int			n;
	int			x;
	std::string	index;

	n = 0;
	x = 0;
	while (1337)
	{
		std::cout << "Enter a command: " << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			std::cout << n << std::endl;
			if (n > 7)
				n = 0;
			phonebook_obj.save_phonebook(n);
			n++;
			if (x < 8)
				x++;
		}
		if (command == "SEARCH")
		{
			phonebook_obj.print_contacts(x);
			while (42)
			{
				std::cout << "Enter an index: " << std::endl;
				std::cin >> index;
				// std::cout << "[" << index << "]" << std::endl;
				// if (index < 0 || index > 7)
				// 	std::cout << "Enter an NUMBER from 0 -> 7" << std::endl;
				// else
				// 	break;
				// else if (index )
				if (check_number(index))
				{
					if (atoi(index) < 0 || atoi(index))
				}
			}
		}
		if (command == "EXIT")
			break ;
	}
}
