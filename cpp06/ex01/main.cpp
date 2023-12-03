#include "Serializer.hpp"

int	main()
{
	Data	st = {3, 'A', 2.3};
	Serializer obj;
	std::cout << "Before: " << st.int_data << std::endl;
	std::cout << "After: ";
	std::cout << obj.deserialize(obj.serialize(&st))->int_data << std::endl;
// 	std::cout << "Original pointer: " << &st << std::endl;
// 	std::cout << "New pointer: " << obj.deserialize(obj.serialize(&st)) << std::endl;
}
