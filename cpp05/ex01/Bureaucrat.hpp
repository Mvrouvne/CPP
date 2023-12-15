#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <ostream>
// #include "Form.hpp"
class	Form;

class	Bureaucrat
{
	
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& old_obj);
		Bureaucrat&	operator=(const Bureaucrat& old_obj);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void	setGrade(int grade);
		void	increment_b();
		void	decrement_b();
		void	signForm(Form& obj);
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& output, const Bureaucrat& old_obj);

#endif