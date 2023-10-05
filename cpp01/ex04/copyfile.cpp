#include "copyfile.hpp"

std::string	my_replace(std::string to_replace, std::string s2)
{
	
}

void	copyfile(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	fileop;
	std::string		new_file = filename + ".replace";
	std::ofstream	outfile(new_file);
	std::string		copy;
	int				char_num;
	int				x = 0;
	int				y = 0;

	fileop.open(filename);
	if (!fileop.is_open() || !outfile.is_open())
	{
		std::cout << "Failed to open file!" << std::endl;
		exit(1);
	}
	while(std::getline(fileop, copy))
	{
		// find & replace
		char_num = copy.find(s1);
		while (copy[char_num] && s1[x])
		{
			if ((copy[char_num] == s1[x]) && (s1[x + 1] == '\0'))
			{
				my_replace();
			}
			// else if ()
			char_num = copy.find(s1, char_num + 1);
		}
		std::cout << char_num << std::endl;
		outfile << copy << std::endl;
	}
	// std::cout << new_file << "--" << std::endl;
	// filename.replace(0, filename.length(), new_file);
}
