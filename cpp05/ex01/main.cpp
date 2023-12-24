#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{

	// std::cout << obj << std::endl;
	Form obj("C34", 60, 60);
	Bureaucrat obj2("Marouane", 10);

	std::cout << "Form Name: " << obj.getName() << std::endl;
	std::cout << "Form Grade: " << obj.get_Grade() << std::endl;
	std::cout << "Bureaucrat Name: " << obj2.getName() << std::endl;
	std::cout << "Bureaucrat Grade: " << obj2.getGrade() << std::endl;
	obj.beSigned(obj2);
	std::cout << "Signed? " << obj.get_Sign() << std::endl;
	obj2.increment_b();
	obj2.signForm(obj);
}
