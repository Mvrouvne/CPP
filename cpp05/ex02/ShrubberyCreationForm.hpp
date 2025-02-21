#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class   ShrubberyCreationForm : public AForm
{
    private:
        int sign;
        int exec;
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& old_obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& old_obj);
        virtual ~ShrubberyCreationForm();
        void    setTarget(std::string target);
        void    TreeCreation(std::string target) const;
        virtual void	execute(Bureaucrat const & executor) const;
};

#endif