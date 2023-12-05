#include "identify.hpp"
#include <unistd.h>
void	fun()
{
	srand(time(NULL));
	std::cout << rand() << std::endl;

}

int main()
{
	srand(time(NULL));
	// generate();
	// generate();
	// generate();
	// generate();
	// generate();
	// generate();
	// generate();
	identify(*generate());
	// Base *base = new ClassA;
	// std::cout << dynamic_cast<ClassA*>(*base);
}
