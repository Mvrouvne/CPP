#include "identify.hpp"

Base::~Base()
{
	// std::cout << "Base Destructor called" << std::endl;
}

ClassA::ClassA()
{
	std::cout << "ClassA Constructor called" << std::endl;
}

ClassB::ClassB()
{
	std::cout << "ClassB Constructor called" << std::endl;
}

ClassC::ClassC()
{
	std::cout << "ClassC Constructor called" << std::endl;
}

Base* generate(void)
{
	unsigned int	t = time(NULL);
	static int	check = 1;
	if (t % 3 == 0)
	{
		ClassA *objA = new ClassA();
		return objA;
	}
	else if (t % 3 == 1)
	{
		ClassB	*objB = new ClassB();
		return objB;
	}
	else
	{
		ClassC	*objC = new ClassC();
		return objC;
	}
	return NULL;
}

// void    identify(Base* p)
// {

// }

// void    identify(Base& p)
// {

// }
