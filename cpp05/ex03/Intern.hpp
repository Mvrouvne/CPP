#ifndef	INTERN_HPP
#define	INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class   Intern
{
    public:
        Intern();
        Intern(const Intern& old_obj);
        Intern& operator=(const Intern& old_obj);
        ~Intern();
        AForm*    makeForm(std::string formName, std::string formTarget);
};

#endif