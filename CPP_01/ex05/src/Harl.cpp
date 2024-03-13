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
	void				(Harl::*fonction[4]) (void) const;
	std::string const	choice[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	fonction[0] = &Harl::debug;
	fonction[1] = &Harl::info;
	fonction[2] = &Harl::warning;
	fonction[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (level == choice[i])
		{
			(this->*fonction[i])();
			break ;
		}
		if (i == 3)
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}

void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	return ;
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void	Harl::warning(void) const
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void) const
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}
