#include "PhoneBook.hpp"
#include "Contacts.hpp"

void	PhoneBook::print_contacts(int n)
{
	int	x = 0;

	while (x < n)
	{
		std::cout << x << std::endl;
		std::cout << contacts[x].getFirstname() << std::endl;
		std::cout << contacts[x].getLastname() << std::endl;
		std::cout << contacts[x].getNickname() << std::endl;
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

	n = 0;
	x = 0;
	while (1337)
	{
		std::cout << "Enter a command: " << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			std::cout << n << std::endl;
			if (n > 1)
				n = 0;
			phonebook_obj.save_phonebook(n);
			n++;
			if (x < 2)
				x++;
		}
		if (command == "SEARCH")
		{
			phonebook_obj.print_contacts(x);
		}
		if (command == "EXIT")
			break ;
	}
}