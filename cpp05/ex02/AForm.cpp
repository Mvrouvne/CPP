#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("101AForm"), sign(false), grade(50), ExecuteGrade(0)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int grade, const int ExecuteGrade) : name(name), grade(grade), ExecuteGrade(ExecuteGrade)
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
		exit (0);
	}
}

AForm::AForm(AForm& old_obj)
{
	std::cout << "AForm Copy constructor called" << std::endl;
	*this = old_obj;
}

AForm&	AForm::operator=(AForm& old_obj)
{
	if (this != &old_obj)
	{
		this->sign = old_obj.sign;
	}
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

std::string	AForm::getName() const
{
	return name;
}

bool	AForm::get_Sign() const
{
	return sign;
}

int	AForm::get_Grade() const
{
	return grade;
}

int	AForm::get_ExecuteGrade() const
{
	return ExecuteGrade;
}

void	AForm::beSigned(Bureaucrat& obj)
{
	try
	{
		if (obj.getGrade() < 1)
			throw GradeTooHighException();
		else if (obj.getGrade() > 150)
			throw GradeTooLowException();
		else if (obj.getGrade() >= this->grade)
		{
			std::cout << obj.getGrade() << " Hello" << std::endl;
			std::cout << this->grade << " Hello" << std::endl;
			this->sign = true;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		exit (0);
	}
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too Hign!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low!";
}

std::ostream& operator<<(std::ostream& output, const AForm& obj)
{
	output << obj.getName();
	output << obj.get_Sign();
	output << obj.get_Grade();
	output << obj.get_ExecuteGrade();

	return output;
}
