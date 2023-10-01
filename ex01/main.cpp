#include "PhoneBook.hpp"
#include "Contacts.hpp"

std::string	check_ifempty(std::string str)
{
	std::string	line;
	while (1)
	{
		std::cout << "Enter " << str << ": " << std::endl;
		std::getline(std::cin, line);
		if (line.empty())
			std::cout << "Line is empty!" << std::endl;
		else
			break ;
	}
	
	return (line);
}

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

std::string line()
{
	std::string name;
	return name;
}

void	Contacts::set_contacts(void)
{
	first_name = check_ifempty("first name");
	first_name = check_ifempty("last name");
	first_name = check_ifempty("nickname");
	while (1)
	{
		phone_number = check_ifempty("phone number");
		if (!check_number(phone_number))
		{
			std::cout << "Numbers Only!" << std::endl;
			continue;
		}
		break ;
	}
	first_name = check_ifempty("darkest secret");
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
		// std::cin >> command;
		std::getline(std::cin, command);
		if (command.empty())
		{
			std::cout << "Line is empty!" << std::endl;
			continue;
		}
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
				if (check_number(index))
				{
					if (atoi(index.c_str()) < 0 || atoi(index.c_str()) > 7)
						std::cout << "Enter an NUMBER from 0 -> 7!" << std::endl;
					else
						break;
				}
				else
					std::cout << "Digits only!" << std::endl;
			}
		}
		if (command == "EXIT")
			break ;
	}
}
