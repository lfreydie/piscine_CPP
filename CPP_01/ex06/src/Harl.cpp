#include "Harl.hpp"

Harl::Harl(void)
{
	// std::cout << "constructor called: annoying customer created" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	// std::cout << "destructor called: annoying customer destroyed" << std::endl;
	return ;
}

void	Harl::complain(std::string level) const
{
	std::string const	choice[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					i;

	for (i = 0; i < 4; i++)
	{
		if (level == choice[i])
			break ;
	}
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return ;
}

void	Harl::debug(void) const
{
	std::cout << "[ DEBUG ]\n"
		"\tI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n\tI really do !\n" << std::endl;
	return ;
}

void	Harl::info(void) const
{
	std::cout << "[ INFO ]\n"
		"\tI cannot believe adding extra bacon costs more money.\n\tYou didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n" << std::endl;
	return ;
}

void	Harl::warning(void) const
{
	std::cout << "[ WARNING ]\n"
		"\tI think I deserve to have some extra bacon for free.\n\tI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
	return ;
}

void	Harl::error(void) const
{
	std::cout << "[ ERROR ]\n"
		"\tThis is unacceptable ! I want to speak to the manager now.\n" << std::endl;
	return ;
}
