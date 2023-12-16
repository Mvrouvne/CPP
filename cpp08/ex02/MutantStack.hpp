#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class   MutantStack : public std::stack<T>
{
    protected:
    public:
        T*   elements[]:
		// MutantStack();
		// MutantStack(const MutantStack& old_obj);
		// MutantStack&	operator=(const MutantStack& old_obj);
		// ~MutantStack();
        class   iterator
        {
            iterator(T* ptr)
            {
                elements = ptr;
            }
            iterator&   operator++()
            {
                elements++;
                retrun *this:
            }
            iterator&   operator--()
            {
                elements--;
                return *this;
            }
            iterator&   begin()
            {
                return  iterator(&elements[0]);
            }
            iterator&   end()
            {
                return iterators(&elements + size);
            }
        };
};
#endif
