#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class   PresidentialPardonForm : public AForm
{
    private:
        int sign;
        int exec;
        std::string target;
    public:
        PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm& old_obj);
        PresidentialPardonForm& operator=(PresidentialPardonForm& old_obj);
        ~PresidentialPardonForm();
        void    setTarget(std::string target);
		void	inform();
};

#endif