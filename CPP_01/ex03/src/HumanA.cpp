#include "HumanA.hpp"

HumanA::HumanA(Weapon &newWeapon): _name("Bill?"), _weapon(newWeapon)
{
	std::cout << "constructor called : " << this->_name << " is here to fight" << std::endl;
	return ;
}

HumanA::HumanA(std::string name, Weapon &newWeapon): _name(name), _weapon(newWeapon)
{
	std::cout << "constructor called : " << this->_name << " is here to fight" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "destructor called : " << this->_name << " is resting now" << std::endl;
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}

std::string const	HumanA::getName(void) const
{
	return (this->_name);
}

Weapon const	HumanA::getWeapon(void) const
{
	return (this->_weapon);
}

void	HumanA::setName(std::string newName)
{
	this->_name = newName;
	return ;
}

void	HumanA::setWeapon(Weapon newWeapon)
{
	this->_weapon = newWeapon;
	return ;
}
