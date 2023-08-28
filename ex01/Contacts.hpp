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
        void    save_contacts();
    
};

#endif