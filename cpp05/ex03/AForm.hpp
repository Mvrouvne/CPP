#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include <ostream>

class	Bureaucrat;

class   AForm
{
	private:
		const std::string name;
		bool sign;
		const int grade;
		const int ExecuteGrade;
	public:
		AForm();
		AForm(const std::string name, const int grade, const int ExecuteGrade);
		AForm(AForm& old_obj);
		AForm&	operator=(AForm& old_obj);
		virtual ~AForm();
		std::string	getName() const;
		bool	get_Sign() const;
		int		get_Grade() const;
		int		get_ExecuteGrade() const;
		void	beSigned(Bureaucrat& obj);
		// virtual void	AbstractForm() = 0;
		virtual void	execute(Bureaucrat const & executor) const = 0;
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

std::ostream& operator<<(std::ostream& output, const AForm& obj);

#endif