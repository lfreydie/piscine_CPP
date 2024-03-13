#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "constructor called : " << this->_type << " created" << std::endl;
	return ;
}

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "constructor called : " << this->_type << " created" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "destructor called : " << this->_type << " broke" << std::endl;
	return ;
}

std::string const&	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
	return ;
}
