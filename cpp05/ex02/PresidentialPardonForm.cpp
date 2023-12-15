#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	// std::cout << "Presidential Default constructor called" << std::endl;
	sign = 25;
	exec = 5;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& old_obj)
{
	// std::cout << "Presidential Copy constructor called" << std::endl;
	*this = old_obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& old_obj)
{
	if (this != &old_obj)
	{
		this->sign = old_obj.sign;
		this->exec = old_obj.exec;
		this->target = old_obj.target;
	}
	return *this;
}

void	PresidentialPardonForm::setTarget(std::string target)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	sign = 25;
	exec = 5;
	this->target = target;
}

void    PresidentialPardonForm::inform() const
{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "Destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->exec)
		throw	GradeTooLowException();
	else if (!get_Sign())
		throw FormNotSignedException();
	else
		inform();
}
