#include "BitcoinExchange.hpp"

void	check_value(std::string d_v, int x, std::string date, BitcoinExchange& obj)
{
	static int	check;
	int	len = x;
	std::string value;
	int	dot = 0;
	if (!d_v[x] || d_v[x] == ' ' || d_v[x] == '\n')
		throw std::invalid_argument("Error: value not found");
	while (d_v[len] && d_v[len] != '\n')
		len++;
	value = d_v.substr(x, len - x);
	if (value[0] == '-')
		throw std::invalid_argument("Error: not a positive number");
	for (int y = 0; value[y]; y++)
	{
		if (value[y] == '.')
			dot++;
		if ((!isdigit(value[y]) && value[y] != '.' && value != "value") || dot > 1)
			throw std::invalid_argument("Error: bad input => " + value);
		else if (value[y] == '.' &&!isdigit(value[y + 1]))
			throw std::invalid_argument("Error: bad input => " + value);
	}
	if (atof(value.c_str()) > 1000)
		throw std::invalid_argument("Error: too large a number");
	if (check)
		obj.FindnMultiply(date, atof(value.c_str()));
	check++;
}

void	check_ymd(std::string date)
{
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 7).c_str());
	int day = atoi(date.substr(8, 10).c_str());
	if (year < 2009 || year > 2022)
	{
		std::cout << year << std::endl;
		throw std::invalid_argument("Error: bad input => " + date);
	}
	else if (month < 0 || month > 12 || day < 0 || day > 31)
		throw std::invalid_argument("Error: bad input => " + date);
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		throw std::invalid_argument("Error: bad input => " + date);
	// else if (month == 2 && day == 29 && ((!(year % 4) && year % 100 != 0) || !(year % 400)))
	// 	throw std::invalid_argument("Error: bad input => " + date);
	// else if (month == 2 && day == 28 && !((!(year % 4) && year % 100 != 0) || !(year % 400)))
	// 	throw std::invalid_argument("Error: bad input => " + date);
}

std::string	check_date(std::string date, int x)
{
	std::string	temp;
	if (!x && date != "date")
		throw std::invalid_argument("Error: bad input => " + date);
	else if (x)
	{
		if (date.size() != 10)
			throw std::invalid_argument("Error: bad input => " + date);
		for (int y = 0; date[y]; y++)
		{
			if (!std::isdigit(date[y]) && date[y] != '-')
				throw std::invalid_argument("Error: bad input => " + date);
			else if (date[y] == '-' && y != 4 && y != 7)
				throw std::invalid_argument("Error: bad input => " + date);
		}
		check_ymd(date);
	}
	return date;
}

void	parse_dv(std::string d_v, int* x, BitcoinExchange& obj)
{
	std::string date;
	int	begin = *x;
	int	check = 0;
	while (d_v[*x] && d_v[*x] != '\n')
	{
		if (d_v[*x] == ' ' && d_v[*x + 1] == '|' && d_v[*x + 2] == ' ')
		{
			date = check_date(d_v.substr(begin, *x - begin), begin);
			*x += 2;
			check_value(d_v, *x + 1, date, obj);
			check++;
		}
		else if (d_v[*x] == ' ')
			throw std::invalid_argument("Error: bad input => \" \"");
		(*x)++;
	}
	if (!check)
		throw std::invalid_argument("Error: bad input => " + (d_v.substr(begin, *x - begin)));
}

void	fill_map(std::string d_v, BitcoinExchange& obj)
{
	std::string	date;
	std::string	key;
	int	x = 0;
		while (d_v[x])
		{
			try
			{
				parse_dv(d_v, &x, obj);
			}
			catch(std::exception& e)
			{
				std::cerr << e.what() << std::endl;
				while(d_v[x] && d_v[x] != '\n')
					x++;
			}
			if (!d_v[x])
				break ;
			x++;
		}
}

int	main(int ac, char** av)
{
	if (ac == 2)
	{
		BitcoinExchange	obj;
		obj.open_csv();
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
		fill_map(d_v, obj);
		// parse_dv(d_v);
		// check_dv(d_v);
		infile.close();
	}
	else
	{
		error_msg("could not open file");
	}
}
