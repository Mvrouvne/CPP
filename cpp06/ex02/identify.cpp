#include "identify.hpp"

Base::~Base()
{
	// std::cout << "Base Destructor called" << std::endl;
}

ClassA::ClassA()
{
	// std::cout << "ClassA Constructor called" << std::endl;
}

ClassB::ClassB()
{
	// std::cout << "ClassB Constructor called" << std::endl;
}

ClassC::ClassC()
{
	// std::cout << "ClassC Constructor called" << std::endl;
}

Base*	generate_help(int x)
{
	if (x % 3 == 0)
	{
		ClassA *objA = new ClassA();
		return dynamic_cast<Base*>(objA); // trying to cast derived into base pointer (upcasting)
	}
	else if (x % 3 == 1)
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

Base* generate(void)
{
	srand(time(NULL));
	static int x;

	if (x < 1)
	{
		if (rand() % 3 == 0)
		{
			ClassA *objA = new ClassA();
			x++;
			return dynamic_cast<Base*>(objA); // trying to cast derived into base pointer (upcasting)
		}
		else if (rand() % 3 == 1)
		{
			ClassB	*objB = new ClassB();
			x++;
			return dynamic_cast<Base*>(objB);
		}
		else
		{
			ClassC	*objC = new ClassC();
			x++;
			return dynamic_cast<Base*>(objC);
		}
	}
	else
	{
		x++;
		return generate_help(x);
	}
	return NULL;
}

void    identify(Base* p)
{
	if (dynamic_cast<ClassA*>(p))
		std::cout << "Type is: ClassA" << std::endl;
	else if (dynamic_cast<ClassB*>(p))
		std::cout << "Type is: ClassB" << std::endl;
	else if (dynamic_cast<ClassC*>(p))
		std::cout << "Type is ClassC" << std::endl;
}

void    identify(Base& p)
{
	try
	{
		p = dynamic_cast<ClassA&>(p);
		std::cout << "Type is: ClassA" << std::endl;
	}
	catch (std::bad_cast& b)
	{
		// std::cout << "Unknown type" << std::endl;
		try
		{
			p = dynamic_cast<ClassB&>(p);
			std::cout << "Type is: ClassB" << std::endl;
		}
		catch (std::bad_cast& b)
		{
			// std::cout << "Unknown type" << std::endl;
			try
			{
				p = dynamic_cast<ClassC&>(p);
				std::cout << "Type is ClassC" << std::endl;
			}
			catch (std::bad_cast& b)
			{
				std::cout << "Unknown type" << std::endl;
			}
			// std::cout << "Unknown type" << std::endl;
		}
	}
	// worked with exceptions because of reference cant take null so dynamic_cast
	//  throws exception instead of nullptr in *
	// upcasting is when we move up in the hierarchy
}
