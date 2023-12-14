#include "Span.hpp"

Span::Span()
{
	N = 0;
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(Span& old_obj)
{
	*this = old_obj;
}

Span&	Span::operator=(Span& old_obj)
{
	if (this != &old_obj)
	{
		this->N = old_obj.N;
	}
	return *this;
}

Span::~Span()
{

}

void	Span::addNumber(int to_add)
{
	if (to_add < 0)
		throw	std::invalid_argument("Can't add negative numbers");
	else if (SpanVec.size() > N)
		throw	std::invalid_argument("Span is filled");
	else
		SpanVec.push_back(to_add);
}

int	Span::shortestSpan()
{
	int	result = 0;
	std::sort(SpanVec.begin(), SpanVec.end());
	std::vector<int>::iterator	it1 = SpanVec.begin();
	std::vector<int>::iterator	it2 = std::prev(SpanVec.begin());
	it1++;
	it2++;
	result = *it1 - *it2;
	while (it1 != SpanVec.end())
	{
		if ((*it1 - *it2) < result)
			result = *it1 - *it2;
		it1++;
		it2++;
	}
	return result;
}

int	Span::longestSpan()
{
	std::sort(SpanVec.begin(), SpanVec.end());
	std::vector<int>::iterator	it1 = SpanVec.begin();
	std::vector<int>::iterator	it2 = std::prev(SpanVec.end());
	return (*it2 - *it1);
}
