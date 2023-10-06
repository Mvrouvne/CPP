#include "PhoneBook.hpp"
#include "Contacts.hpp"

void	PhoneBook::print_index(int x)
{
	std::cout << "First name: " << contacts[x].getFirstname() << std::endl;
	std::cout << "Last name: "<< contacts[x].getLastname() << std::endl;
	std::cout << "Nickname:" << contacts[x].getNickname() << std::endl;
	std::cout << "Darkest secret:" << contacts[x].getDarkestsecret() << std::endl;
	std::cout << "Phone number:" << contacts[x].getPhonenumber() << std::endl;
}

std::string	check_ifempty(std::string str)
{
	std::string	line;
	std::cout << "Enter " << str << ": ";
	while (1)
	{
		std::getline(std::cin, line);
		if (std::cin.eof())
           exit (0);
		if (line.empty())
		{
			std::cout << "A Contact detail can NOT be empty!" << std::endl;
			std::cout << "Try Again: ";
		}
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
	std::cout << "--------------------------------------------" << std::endl;
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
		std::cout << "__________|__________|__________|__________|" << std::endl;
		x++;
	}
}

void	Contacts::set_contacts(void)
{
	first_name = check_ifempty("first name");
	last_name = check_ifempty("last name");
	nickname = check_ifempty("nickname");
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
	darkest_secret = check_ifempty("darkest secret");
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
		if (std::cin.eof())
            exit (0);
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (command == "ADD")
		{
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
				std::cout << "Enter an index: ";
				std::getline(std::cin, index);
				if (check_number(index))
				{
					if (atoi(index.c_str()) < 0 || atoi(index.c_str()) > 7)
						std::cout << "Enter an NUMBER from 0 -> 7!" << std::endl;
					else
					{
						if (atoi(index.c_str()) >= n)
						{
							std::cout << "No contact found in this index!" << std::endl;
							break;
						}
						phonebook_obj.print_index(atoi(index.c_str()));
						break;
					}
				}
				else
					std::cout << "Digits only!" << std::endl;
			}
		}
		if (command == "EXIT")
			break ;
	}
}
