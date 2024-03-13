#include "HumanB.hpp"

HumanB::HumanB(void): _name("Bill?"), _weapon(NULL)
{
	std::cout << "constructor called : " << this->_name << " is here to fight" << std::endl;
	return ;
}

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	std::cout << "constructor called : " << this->_name << " is here to fight" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "destructor called : " << this->_name << " is resting now" << std::endl;
	return ;
}

void	HumanB::attack(void) const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their bare hand" << std::endl;
	return ;
}

std::string const	HumanB::getName(void) const
{
	return (this->_name);
}

Weapon const	HumanB::getWeapon(void) const
{
	return *(this->_weapon);
}

void	HumanB::setName(std::string newName)
{
	this->_name = newName;
	return ;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
	return ;
}
