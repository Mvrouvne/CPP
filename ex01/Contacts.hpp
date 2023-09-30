#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>

class   Contacts
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		int         phone_number;
	public:
		void    set_contacts();
		std::string getFirstname() const {return first_name;}
		std::string getLastname() const {return last_name;}
		std::string getNickname() const {return nickname;}
		std::string getDarkestsecret() const {return darkest_secret;}
		int			getPhonenumber() const {return phone_number;}
	
};

#endif