#include "copyfile.hpp"

void	copyfile(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	fileop;
	std::string		new_file = filename + ".replace";
	std::ofstream	outfile(new_file);

	fileop.open(filename);
	if (!fileop.is_open() || !outfile.is_open())
	{
		std::cout << "Failed to open file!" << std::endl;
		exit(1);
	}
	std::getline(fileop, new_file);
	// std::cout << new_file << "--" << std::endl;
	// filename.replace(0, filename.length(), new_file);
	outfile << new_file << std::endl;
}
