#include <map>
#include <iostream>
#include <iomanip>

class BitcoinExchange
{
private:
	std::map<std::string, float>	_exchangeRate;
public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &src);
	~BitcoinExchange();

	BitcoinExchange &operator=(BitcoinExchange const &rhs);
	void		exchange(std::string &filename);
	void 		getRate();
	void		checkDate();
	void 		checkValue();
};
