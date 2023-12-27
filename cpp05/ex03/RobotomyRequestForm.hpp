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
        RobotomyRequestForm(const RobotomyRequestForm& old_obj);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& old_obj);
        virtual ~RobotomyRequestForm();
        void    setTarget(std::string target);
		void	inform() const;
        std::string	getName() const;
        virtual void	execute(Bureaucrat const & executor) const;
};

#endif