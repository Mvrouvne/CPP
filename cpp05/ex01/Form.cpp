#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("101Form"), sign(false), grade(50), ExecuteGrade(0)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string name, const int grade, const int ExecuteGrade) : name(name), grade(grade), ExecuteGrade(ExecuteGrade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& old_obj) : name(old_obj.name), sign(old_obj.sign), grade(old_obj.grade), ExecuteGrade(old_obj.ExecuteGrade)
{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form&	Form::operator=(const Form& old_obj)
{
	if (this != &old_obj)
	{
		Form tmp(old_obj);
		std::swap(tmp, *this);
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

std::string	Form::getName() const
{
	return name;
}

bool	Form::get_Sign() const
{
	return sign;
}

int	Form::get_Grade() const
{
	return grade;
}

int	Form::get_ExecuteGrade() const
{
	return ExecuteGrade;
}

void	Form::beSigned(Bureaucrat& obj)
{
	if (this->grade < 1)
		throw GradeTooHighException();
	else if (this->grade > 150)
		throw GradeTooLowException();
	else if (obj.getGrade() <= this->grade)
		this->sign = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade Too Hign!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low!";
}

std::ostream& operator<<(std::ostream& output, const Form& obj)
{
	output << obj.getName();
	output << obj.get_Sign();
	output << obj.get_Grade();
	output << obj.get_ExecuteGrade();

	return output;
}
