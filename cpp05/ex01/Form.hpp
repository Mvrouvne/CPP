#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include <ostream>
#include "Bureaucrat.hpp"

class   Form
{
	private:
		const std::string name;
		bool sign;
		const int grade;
		const int ExecuteGrade;
	public:
		Form();
		std::string	getName() const;
		bool	get_Sign() const;
		int		get_Grade() const;
		int		get_ExecuteGrade() const;
		void	beSigned(Bureaucrat& obj);
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
};

std::ostream& operator<<(std::ostream& output, const Form& obj);

#endif