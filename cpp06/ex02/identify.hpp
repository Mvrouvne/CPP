#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <iostream>

class	Base
{
	public:
		virtual ~Base();
};

class	ClassA : public Base
{

};

class	ClassB : public Base
{

};

class	ClassC : public Base
{

};

Base* generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif