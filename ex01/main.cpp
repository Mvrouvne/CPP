#include "PhoneBook.hpp"
#include "Contacts.hpp"


void	Contacts::save_contacts(void)
{
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
}

int	main()
{
	Contacts	contacts;
	std::string command;

	while (1337)
	{
		std::cout << "Enter a command: " << std::endl;
		std::cin >> command;
		if (command == "ADD")
			contacts.save_contacts();
		if (command == "EXIT")
			break ;

	}
}