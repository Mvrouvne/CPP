#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat obj("Marouane", 3);

	obj.increment_b();
	std::cout << "Name: " << obj.getName() << std::endl;
	std::cout << "Grade: " << obj.getGrade() << std::endl;

	// std::cout << obj << std::endl;
}