#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat obj("Marouane", 0);

	std::cout << "Name: " << obj.getName() << std::endl;
	std::cout << "Grade: " << obj.getGrade() << std::endl;
}