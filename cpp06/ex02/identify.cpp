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
	if (rand() % 3 == 0)
	{
		ClassA *objA = new ClassA();
		return dynamic_cast<Base*>(objA); // trying to cast derived into base pointer (downcasting)
	}
	else if (rand() % 3 == 1)
	{
		ClassB	*objB = new ClassB();
		return dynamic_cast<Base*>(objB);
	}
	else
	{
		ClassC	*objC = new ClassC();
		return dynamic_cast<Base*>(objC);
	}
	return NULL;
}

void    identify(Base* p)
{
	std::cout << std::typeid(p).name();
}

// void    identify(Base& p)
// {

// }
