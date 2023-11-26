#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class   RobotomyRequestFrom : public AForm
{
    private:
        int sign;
        int exec;
        std::string target;
    public:
        RobotomyRequestFrom();
		RobotomyRequestFrom(std::string target);
        RobotomyRequestFrom(RobotomyRequestFrom& old_obj);
        RobotomyRequestFrom& operator=(RobotomyRequestFrom& old_obj);
        ~RobotomyRequestFrom();
        void    setTarget(std::string target);
		void	inform();
};

#endif