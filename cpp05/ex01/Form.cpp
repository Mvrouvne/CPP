#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("101Form"), sign(false), grade(50), ExecuteGrade(0)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string name, const int grade, const int ExecuteGrade) : name(name), grade(grade), ExecuteGrade(ExecuteGrade)
{
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Form::Form(const Form& old_obj) : grade(old_obj.grade), ExecuteGrade(old_obj.ExecuteGrade)
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = old_obj;
}

Form&	Form::operator=(const Form& old_obj)
{
	if (this != &old_obj)
	{
		this->sign = old_obj.sign;
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
	try
	{
		if (obj.getGrade() < 1)
			throw GradeTooHighException();
		else if (obj.getGrade() > 150)
			throw GradeTooLowException();
		else if (obj.getGrade() <= this->grade)
			this->sign = true;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		exit (0);
	}
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
