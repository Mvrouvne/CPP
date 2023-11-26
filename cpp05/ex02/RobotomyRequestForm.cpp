#include "RobotomyRequestFrom.hpp"

RobotomyRequestFrom::RobotomyRequestFrom()
{
	std::cout << "Robotomy Default constructor called" << std::endl;
    std::cout << "Robotomy makes drilling noises" << std::endl;
	sign = 72;
	exec = 45;
}

RobotomyRequestFrom::RobotomyRequestFrom(RobotomyRequestFrom& old_obj)
{
	std::cout << "Robotomy Copy constructor called" << std::endl;
	*this = old_obj;
}

RobotomyRequestFrom& RobotomyRequestFrom::operator=(RobotomyRequestFrom& old_obj)
{
	if (this != &old_obj)
	{
		this->sign = sign;
		this->exec = exec;
		this->target = target;
	}
	return *this;
}

void	RobotomyRequestFrom::setTarget(std::string target)
{
	this->target = target;
}

RobotomyRequestFrom::RobotomyRequestFrom(std::string target)
{
    this->target = target;
}

void    RobotomyRequestFrom::inform()
{
    static int time;

}

RobotomyRequestFrom::~RobotomyRequestFrom()
{
	std::cout << "Destructor called" << std::endl;
}
