#include "Serializer.hpp"

int	main()
{
	Data	st = {3, 'A', 2.3};
	Serializer obj;
	std::cout << "Before: " << st.int_data << std::endl;
	obj->Serializer(st);
	std::cout << "After: " << st.int_data << std::endl;
}
