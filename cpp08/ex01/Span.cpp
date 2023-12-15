#include "Span.hpp"

Span::Span()
{
	this->N = 0;
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span& old_obj)
{
	*this = old_obj;
}

Span&	Span::operator=(const Span& old_obj)
{
	if (this != &old_obj)
	{
		this->N = old_obj.N;
		this->SpanVec = old_obj.SpanVec;
	}
	return *this;
}

Span::~Span()
{

}

void	Span::addNumber(int to_add)
{
	// if (to_add < 0)
	// 	throw	std::invalid_argument("Can't add negative numbers");
	if (SpanVec.size() + 1 > N)
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
	if (SpanVec.empty() || SpanVec.size() == 1)
		throw	std::invalid_argument("Container can't be empty nor equal to 1!");
	std::sort(SpanVec.begin(), SpanVec.end());
	std::vector<int>::iterator	it1 = SpanVec.begin();
	std::vector<int>::iterator	it2 = std::prev(SpanVec.end());
	return (*it2 - *it1);
}

void	Span::addNumSkip(std::vector<int> vec)
{
	if (SpanVec.empty())
		SpanVec.insert(SpanVec.begin(), vec.begin(), vec.end());
	else
		SpanVec.insert(SpanVec.end(), vec.begin(), vec.end());
	if (SpanVec.size() > N)
		throw	std::invalid_argument("Span is filled");
}
