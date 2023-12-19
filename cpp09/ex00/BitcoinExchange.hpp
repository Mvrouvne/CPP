#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <exception>
#include <ctime>

// template<typename T>
class   BitcoinExchange
{
	private:
		std::map<std::string, float> csv_map;
		std::ifstream	csv_infile;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& old_obj);
		BitcoinExchange&	operator=(const BitcoinExchange& old_obj);
		~BitcoinExchange();
		void	open_csv();
		void	FindnMultiply(std::string date, float value);
};

void	error_msg(std::string err);

#endif