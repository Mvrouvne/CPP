#include "copyfile.hpp"

void	copyfile(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	fileop;
	std::string		new_file = filename + ".replace";
	std::ofstream	outfile(new_file);

	fileop.open(filename);
	if (!fileop.is_open() || !fileop.is_open())
	{
		std::cout << "Failed to open file!" << std::endl;
		exit(1);
	}
	filename.replace(0, filename.length(), new_file);
}
