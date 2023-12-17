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

}

void	error_msg(std::string err)
{
	std::cerr << "Error: " << err << std::endl;
	exit (1);
}

// void	BitcoinExchange::addToContainer(float key, std::string data)
// {
// 	// csv.insert(std::pair(key, data));
// }
