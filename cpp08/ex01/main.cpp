#include "Span.hpp"

int	main()
{
	Span obj(5);

	try
	{
		obj.addNumber(6);
		obj.addNumber(3);
		obj.addNumber(17);
		obj.addNumber(9);
		obj.addNumber(11);
		std::cout << "Longest Span: " << obj.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << obj.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}
