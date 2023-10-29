#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	Animal *obj[4];

	obj[0] = new Dog();
	obj[1] = new Dog();
	obj[2] = new Cat();
	obj[3] = new Cat();
	int x = 0;
	while (x < 4)
	{
		delete obj[x];
		x++;
	}

	// Cat	obj;
	// obj.setCat("Marouane");
	// std::cout << obj.getCat(2) << std::endl;

	return 0;
}