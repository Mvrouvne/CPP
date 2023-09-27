#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class   PhoneBook
{
    private:
        std::string contacts[8];
        int         index;
        std::string **arr;
    public:
        void    save_phonebook(std::string first_name, std::string last_name,
									std::string nickname, std::string darkest_secret,
									int phone_number);
        void    search();
};

#endif