#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "Robotomy Default constructor called" << std::endl;
    std::cout << "Robotomy makes drilling noises" << std::endl;
	sign = 72;
	exec = 45;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& old_obj)
{
	std::cout << "Robotomy Copy constructor called" << std::endl;
	*this = old_obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& old_obj)
{
	if (this != &old_obj)
	{
		this->sign = old_obj.sign;
		this->exec = old_obj.exec;
		this->target = old_obj.target;
	}
	return *this;
}

void	RobotomyRequestForm::setTarget(std::string target)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    this->target = target;
}

void    RobotomyRequestForm::inform()
{
	unsigned int	t = time(nullptr);
	// static int	checker;

	if (t % 2 == 0)
	{
		std::cout << target << " has been robotomized successfully" << std::endl;
		// checker = true;
	}
	else
	{
		std::cout << "robotomy has failed" << std::endl;
		// checker = false;
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called" << std::endl;
}

void	RobotomyRequestForm::AbstractForm()
{
	return ;
}