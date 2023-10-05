#include "copyfile.hpp"

void	copyfile(std::string filename, std::string s1, std::string s2)
{
	std::ofstream	fileop;

	fileop.open(filename);
	fileop.open("new_file");
	if (!fileop.is_open() || !fileop.is_open())
	{
		std::cout << "Failed to open file!" << std::endl;
		exit(1);
	}
}
