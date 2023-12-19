#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& old_obj)
{
	*this = old_obj;
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& old_obj)
{
	(void)old_obj;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
	//delet!!!
}

void	error_msg(std::string err)
{
	std::cerr << "Error: " << err << std::endl;
	exit (1);
}

void	BitcoinExchange::open_csv()
{
	std::string	csv_str;
	std::string	date;
	float		ex_rate;
	csv_infile.open("data.csv");
	if (!csv_infile.is_open())
		error_msg("could not open file");
	std::getline(csv_infile, csv_str);
	while(std::getline(csv_infile, csv_str))
	{
		date = csv_str.substr(0, csv_str.find(','));
		ex_rate = atof(csv_str.substr(csv_str.find(',') + 1, csv_str.length() - 1).c_str());
		csv_map[date] = ex_rate;
	}
}

void	BitcoinExchange::FindnMultiply(std::string date, float value)
{
	std::map<std::string, float>::iterator it = csv_map.find(date);
	if (it == csv_map.end())
	{
		it = csv_map.lower_bound(date);
		if (it != csv_map.begin())
			it--;
	}
	std::cout << date << " => " << value << " = " << (value * it->second) << std::endl;
}
