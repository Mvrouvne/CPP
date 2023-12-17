#include "BitcoinExchange.hpp"

int	main(int ac, char** av)
{
	if (ac == 2)
	{
		std::string d_v;
		std::string	tmp;
		std::ifstream	infile;
		infile.open(av[1]);
		if (!infile.is_open())
			error_msg("could not open file");
		while (!infile.eof())
		{
			infile >> tmp;
			d_v = d_v + ' ' + clear
			tmp;
		}
		std::cout << d_v << std::endl;
		infile.close();
	}
	else
	{
		error_msg("could not open file");
	}
}
