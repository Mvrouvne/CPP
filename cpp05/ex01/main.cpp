#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat obj("Marouane", 2);

	std::cout << "Name: " << obj.getName() << std::endl;
	std::cout << "Grade: " << obj.getGrade() << std::endl;
	// std::cout << obj << std::endl;
}