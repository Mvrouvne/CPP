#include "Form.hpp"

Form::Form() : name("Bureaucrat"), sign(false)
{
	std::cout << "Form default constructor called" << std::endl;
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
		if (obj.getGrade() < grade)
			throw GradeTooHighException();
		else if (obj.getGrade() > grade)
			throw GradeTooLowException();
	}
	catch(Form& e)
	{
		std::cout << e.what() << std::endl;
		exit (0);
	}

}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too Hign!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
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
