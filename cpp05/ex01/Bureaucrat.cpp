#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(59)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat Parametrized constructor called" << std::endl;
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& old_obj) : name(old_obj.name), grade(old_obj.grade)
{
	std::cout << "Buraucrat Copy constructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& old_obj)
{
	if (this != &old_obj)
	{
		Bureaucrat tmp(old_obj);
		std::swap(tmp, *this);
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too Hign!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low!";
}

void	Bureaucrat::increment_b()
{
	setGrade(grade - 1);
}

void	Bureaucrat::decrement_b()
{
	setGrade(grade + 1);
}

std::ostream&	operator<<(std::ostream& output, const Bureaucrat& obj)
{
	// output << obj.getName();
	// output << obj.getGrade();

	output << "Name: ";
	output << obj.getName() << std::endl;
	output << "Grade: ";
	output << obj.getGrade();

	return output;
}

const char* Bureaucrat::FormNotSignedException::what() const throw()
{
	return "FormNotSigned";
}

void	Bureaucrat::signForm(Form& obj)
{
	try
	{
		if (obj.get_Sign())
			std::cout << this->name << " signed " << obj.getName() << std::endl;
		else if (!obj.get_Sign())
			throw FormNotSignedException();
	}
	catch(std::exception& e)
	{
		std::cerr << this->name << " couldn't sign " << obj.getName() << " because " << e.what() << std::endl;
	}
}
