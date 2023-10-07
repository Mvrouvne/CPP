#include "copyfile.hpp"

std::string	my_replace(std::string copy, int pos, std::string s1)
{
	copy = copy.substr(pos + s1.length(), copy.length());
	return copy;
}

void	copyfile(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	fileop;
	std::string		new_file = filename + ".replace";
	std::string		copy;
	int				char_num;
	int				x = 0;
	int				y = 0;

	fileop.open(filename);
	if (!fileop.is_open())
	{
		std::cout << "Failed to open file!" << std::endl;
		exit(1);
	}
	std::ofstream	outfile(new_file);
	if (!outfile.is_open())
	{
		std::cout << "Failed to open file!" << std::endl;
		exit(1);
	}
	while(std::getline(fileop, copy))
	{
		char_num = copy.find(s1);
		while (copy[x])
		{
			if (char_num != -1 && x == char_num)
			{
				outfile << s2;
				copy = my_replace(copy, char_num, s1);
				x = 0;
				char_num = copy.find(s1);
			}
			else
			{
				outfile << copy[x];
				x++;
			}
		}
		outfile << copy << std::endl;
	}
}
