#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>

// template<typename T>
class   BitcoinExchange
{
	private:
		std::map<std::string, float> csv;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& old_obj);
		BitcoinExchange&	operator=(const BitcoinExchange& old_obj);
		~BitcoinExchange();
};

void	error_msg(std::string err);

#endif