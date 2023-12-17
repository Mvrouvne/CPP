#include "BitcoinExchange.hpp"

void	check_date(std::string date, int x)
{
	std::string	temp;
	if (!x && date != "date")
		throw std::invalid_argument("Error: bad input => " + date);
	else if (x)
	{
		if (date.size() != 10)
			throw std::invalid_argument("Error: bad input => " + date);
		// int here = date.find('-');
		for (int y = 0; date[y]; y++)
		{
			if (!std::isdigit(date[y]) && date[y] != '-')
				throw std::invalid_argument("Error: bad input => " + date);
			else if (date[y] == '-' && y != 4 && y != 7)
				throw std::invalid_argument("Error: bad input => " + date);
		}
	}
}

void	parse_dv(std::string d_v, int* x)
{
	int	begin = *x;
	// int	pipe = 0;
	while (d_v[*x] && d_v[*x] != '\n')
	{
		if (d_v[*x] == ' ' && d_v[*x + 1] == '|' && d_v[*x + 2] == ' ')
		{
			check_date(d_v.substr(begin, *x - begin), begin);
			*x += 2;
			// pipe = *x + 1;
		}
		else if (d_v[*x] == ' ')
			throw std::invalid_argument("Error: bad input => \" \"");
		(*x)++;
	}
}

void	fill_map(BitcoinExchange& obj, std::string d_v)
{
	(void)obj;
	std::string	date;
	std::string	key;
	int	x = 0;
	// int	c = 0;
	// while (1)
	// {
		while (d_v[x])
		{
			try
			{
				parse_dv(d_v, &x);
				std::cout << "Passed line" << std::endl;
			}
			catch(std::exception& e)
			{
				std::cerr << e.what() << std::endl;
				while(d_v[x] != '\n')
				{
					x++;
				}
			}
			x++;
		}
}

int	main(int ac, char** av)
{
	if (ac == 2)
	{
		BitcoinExchange	obj;
		std::string d_v;
		char		tmp;
		std::ifstream	infile;
		infile.open(av[1]);
		if (!infile.is_open())
			error_msg("could not open file");
		while (!infile.eof())
		{
			tmp = infile.get();
			if (tmp != EOF)
				d_v = d_v + tmp;
		}
		fill_map(obj, d_v);
		// parse_dv(d_v);
		// check_dv(d_v);
		infile.close();
	}
	else
	{
		error_msg("could not open file");
	}
}
