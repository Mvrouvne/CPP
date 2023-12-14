#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>

class	Span
{
	private:
		unsigned int	N;
		std::vector<int> SpanVec;
	public:
		Span();
		Span(unsigned int N);
		Span(Span& old_obj);
		Span&	operator=(Span& old_obj);
		~Span();
		void	addNumber(int to_add);
		int	shortestSpan();
		int	longestSpan();
};

#endif