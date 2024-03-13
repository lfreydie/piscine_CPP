#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	Customer;

	if (ac != 2)
		std::cout << "Wrong arguments" << std::endl;
	else
		Customer.complain(av[1]);
	return (0);
}
