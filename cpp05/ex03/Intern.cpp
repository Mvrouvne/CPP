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

Intern::Intern(const Intern& old_obj)
{
	*this = old_obj;
}

Intern&	Intern::operator=(const Intern& old_obj)
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
	int		z = 0;

	for(int x = 0; x < 3; x++)
	{
		if (formName == name_arr[x])
		{
			std::cout << "Intern creates " << formName << std::endl;
			while (z < 3)
			{
				if (z == x)
				{
					z++;
					continue ;
				}
				else
					delete requests[z];
				z++;
			}
			return (requests[x]);
		}
	}
	for (int y = 0; y < 3; y++)
		delete requests[y];
	throw Bureaucrat::FormNameDoesntExist();
	return NULL;
}
