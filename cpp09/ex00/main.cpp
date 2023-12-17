#include "BitcoinExchange.hpp"

int	main(int ac, char** av)
{
	if (ac == 2)
	{
		std::string read;
		std::ifstream	infile;
		infile.open(av[1]);
		while (infile)
		{
			infile >> read;
			std::cout << read << std::endl;
		}
		infile.close();
	}
	else
	{
		std::cerr << "Error: could not open file." << std::endl;
	}
}
