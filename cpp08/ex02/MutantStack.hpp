#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class   MutantStack : public std::stack<T>
{
    public:
		// MutantStack();
		// MutantStack(const MutantStack& old_obj);
		// MutantStack&	operator=(const MutantStack& old_obj);
		// ~MutantStack();
        static void    iterator()
        {
            std::cout << "iterator" << std::endl;
        }
};

#endif