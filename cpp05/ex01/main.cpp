#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{

	// std::cout << obj << std::endl;
	Form obj("C34", 1, 9);
	Bureaucrat obj2("Marouane", 40);

	std::cout << "Name: " << obj.getName() << std::endl;
	std::cout << "Grade: " << obj.get_Grade() << std::endl;
	obj.beSigned(obj2);
	std::cout << "Signed? " << obj.get_Sign() << std::endl;
}
