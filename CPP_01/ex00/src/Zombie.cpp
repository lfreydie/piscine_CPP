#include "Zombie.hpp"

Zombie::Zombie(void): _name("John Doe")
{
	std::cout << "constructor: " << this->_name << " awake" << std::endl;
	return ;
}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "constructor: " << this->_name << " awake" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "destructor: " << this->_name << " is back underground" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
