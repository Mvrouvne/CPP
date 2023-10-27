#include <iostream>

class	Base
{
	protected:
		int	x;
		int	y;
	public:
		Base(){printf("BASE\n"); x = 10, y = 20;}
		virtual int	get_x(){return x;}
		int	get_y(){return y;}
};

class	Derived : public Base
{
	private:
		int x1;
		int	y1;
	public:
		Derived(){printf("DERIVED\n"); x1 = 100, y1 = 200;}
		int	get_x(){return x1;}
		int	get_y(){return y1;}
};

int	main()
{
	// Base	*obj = new Base;

	// Derived obj2;
	// obj = &obj2;
	// std::cout << obj->get_x() << std::endl;

	Base *obj = new Base;

	std::cout << obj->get_x() << std::endl;
}