#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

class   PhoneBook
{
	private:
		Contacts	contacts[8];
	public:
		void    save_phonebook(int n);
		void	print_contacts(int n);
		void	print_index(int x);
};


#endif