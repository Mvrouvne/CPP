#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

class	Span
{
	private:
		unsigned int	N;
		std::vector<int> SpanVec;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& old_obj);
		Span&	operator=(const Span& old_obj);
		~Span();
		void	addNumber(int to_add);
		int	shortestSpan();
		int	longestSpan();
		void	addNumSkip(std::vector<int> vec);
};

#endif