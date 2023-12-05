#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <iostream>
#include <ctime>

class	Base
{
	public:
		virtual ~Base();
};

class	ClassA : public Base
{
	public:
		ClassA();
};

class	ClassB : public Base
{
	public:
		ClassB();
};

class	ClassC : public Base
{
	public:
		ClassC();
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif