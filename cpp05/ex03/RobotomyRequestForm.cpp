#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	// std::cout << "Robotomy Default constructor called" << std::endl;
    std::cout << "Robotomy makes drilling noises" << std::endl;
	sign = 72;
	exec = 45;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& old_obj)
{
	// std::cout << "Robotomy Copy constructor called" << std::endl;
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
	// std::cout << "Robotomy makes drilling noises" << std::endl;
	sign = 72;
	exec = 45;
    this->target = target;
}

void    RobotomyRequestForm::inform() const
{
	unsigned int	t = time(nullptr);
	static int	checker;

	if (checker > 0)
	{
		if (checker % 2 == 0)
			std::cout << target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "robotomy has failed" << std::endl;
	}
	else if (t % 2 == 0)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomy has failed" << std::endl;
	checker++;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "Destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->exec)
		throw	GradeTooLowException();
	else if (!get_Sign())
		throw FormNotSignedException();
	else
		inform();
}
