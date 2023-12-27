#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat obj("Marouane", 10);

		obj.increment_b();
		// obj.decrement_b();
		std::cout << "Name: " << obj.getName() << std::endl;
		std::cout << "Grade: " << obj.getGrade() << std::endl;

		std::cout << "OBJ: " <<  obj << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}