#include "Span.hpp"

int	main()
{
	Span obj = Span(5);
	std::vector<int> Vec;
	Vec.push_back(6);
	Vec.push_back(3);
	Vec.push_back(17);
	Vec.push_back(9);
	Vec.push_back(11);
	try
	{
		// obj.addNumber(6);
		// obj.addNumber(3);
		// obj.addNumber(17);
		// obj.addNumber(9);
		// obj.addNumber(11);
		obj.addNumSkip(Vec);
		std::cout << "Longest Span: " << obj.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << obj.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
