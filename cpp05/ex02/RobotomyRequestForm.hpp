#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include <time.h>
#include "AForm.hpp"

class   RobotomyRequestForm : public AForm
{
    private:
        int sign;
        int exec;
        std::string target;
    public:
        RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm& old_obj);
        RobotomyRequestForm& operator=(RobotomyRequestForm& old_obj);
        ~RobotomyRequestForm();
        void    setTarget(std::string target);
		void	inform();
        void	AbstractForm();
        // void	execute(Bureaucrat const & executor);
};

#endif