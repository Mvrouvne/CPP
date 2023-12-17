#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <exception>

// template<typename T>
class   BitcoinExchange
{
	private:
		std::multimap<std::string, float> csv;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& old_obj);
		BitcoinExchange&	operator=(const BitcoinExchange& old_obj);
		~BitcoinExchange();
		// void	addToContainer(float key, std::string data);
		void	displayContainer();
};

void	error_msg(std::string err);

#endif