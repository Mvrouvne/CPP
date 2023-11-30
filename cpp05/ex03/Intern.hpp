#ifndef	INTERN_HPP
#define	INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class   Intern
{
    public:
        Intern();
        Intern(Intern& old_obj);
        Intern& operator=(Intern& old_obj);
        ~Intern();
        AForm*    makeForm(std::string formName, std::string formTarget);
};

#endif