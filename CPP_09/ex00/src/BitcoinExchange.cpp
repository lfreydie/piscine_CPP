#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	//std::cout << "BitcoinExchange default constructor called" << std::endl;
	return ;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	//std::cout << "BitcoinExchange parametric constructor called" << std::endl;
	*this = src;
	return ;
}

BitcoinExchange::~BitcoinExchange()
{
	//std::cout << "BitcoinExchange destructor called" << std::endl;
	return ;
}

BitcoinExchange 	&BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	//std::cout << "BitcoinExchange assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_exchangeRate.clear();
		this->_exchangeRate = rhs._exchangeRate;
		this->_value = rhs._value;
	}
	return (*this);
}


