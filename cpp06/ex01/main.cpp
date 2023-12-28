#include "Serializer.hpp"

int	main()
{
	Data	st = {3, 'A', 2.3};
	std::cout << "Before: " << st.int_data << " | " << st.char_data << " | " << st.double_data << std::endl;
	Serializer::deserialize(Serializer::serialize(&st));
	std::cout << "After: " << st.int_data << " | " << st.char_data << " | " << st.double_data << std::endl;
}
