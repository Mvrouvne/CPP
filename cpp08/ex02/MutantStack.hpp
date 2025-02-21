#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class   MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{
		}
		MutantStack(const MutantStack& old_obj)
		{
			*this = old_obj;
		}
		MutantStack&	operator=(const MutantStack& old_obj)
		{
			(void)old_obj;
			return *this;
		}
		~MutantStack()
		{
			
		}
		typedef typename std::deque<T>::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};
#endif
