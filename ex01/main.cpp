#include "PhoneBook.hpp"
#include "Contacts.hpp"

void	PhoneBook::search()
{
	std::cout << "Heeeree" << std::endl;
	printf("[%s]\n", arr[0][0]);
	std::cout << arr[0] << std::endl;
}


void	PhoneBook::save_phonebook(std::string first_name, std::string last_name,
									std::string nickname, std::string darkest_secret,
									int phone_number)
{
	static int	n;
	Contacts	obj;
	int			x;
	int			y;
	int			i;
	// std::string		**arr;

	// if (n == 0)
		arr = new std::string*[8];
	// contacts[n] = save_phonebook(first_name, last_name, nickname,
	// 						darkest_secret, phone_number);

	i = 0;
	while (i < 8)
	{
		arr[i] = new std::string[5];
		i++;
	}
	x = 0;
	if (n < 8)
	{
		arr[n][0] = first_name;
		arr[n][1] = last_name;
		arr[n][2] = nickname;
		arr[n][3] = darkest_secret;
		arr[n][4] = phone_number;
		index = n;
		n++;
	}
	std::cout << n << std::endl;
}

void	Contacts::save_contacts(void)
{
	PhoneBook obj;
	// while (1337)
	// {
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
	// }
	obj.save_phonebook(first_name, last_name, nickname,
							darkest_secret, phone_number);
}

int	main()
{
	Contacts	contacts;
	PhoneBook	phonebook;
	std::string command;

	while (1337)
	{
		std::cout << "Enter a command: " << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			contacts.save_contacts();
			// std::cout <<  << std::endl;
		}
		if (command == "EXIT")
			break ;
		phonebook.search();
	}
}