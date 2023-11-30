#include "Intern.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
// class	ShrubberyCreationForm;
// class	RobotomyRequestForm;
// class	PresidentialPardon;

Intern::Intern()
{
	// std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(Intern& old_obj)
{
	*this = old_obj;
}

Intern&	Intern::operator=(Intern& old_obj)
{
	(void)old_obj;
	return *this;
}

Intern::~Intern()
{
	// std::cout << "Intern Destroctor called" << std::endl;

}

AForm*	Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string name_arr[3] = {"shrubbery request", "presidential request", "robotomy request"};
	AForm*	requests[3] = {new ShrubberyCreationForm(formTarget), new PresidentialPardonForm(formTarget), new RobotomyRequestForm(formTarget)};

	for(int x = 0; x < 3; x++)
	{
		if (formName == name_arr[x])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (requests[x]);
		}
	}
	std::cout << "Form name doesn't exist!" << std::endl;
	return NULL;
}
