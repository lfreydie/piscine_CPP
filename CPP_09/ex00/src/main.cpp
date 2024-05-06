#include "../includes/BitcoinExchange.hpp"

int 	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Invalid arguments:\n\tUsage: ./btc [filename]" << std::endl;
		return 1;
	}
	try
	{
		BitcoinExchange btc;
		btc.exchange(static_cast<std::string>(av[1]));
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}
