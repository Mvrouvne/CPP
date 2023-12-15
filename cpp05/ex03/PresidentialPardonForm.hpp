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
        PresidentialPardonForm(const PresidentialPardonForm& old_obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& old_obj);
        ~PresidentialPardonForm();
        void    setTarget(std::string target);
		void	inform() const;
        virtual void	execute(Bureaucrat const & executor) const;
};

#endif