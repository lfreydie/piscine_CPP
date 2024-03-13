/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:00:15 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/05 19:29:25 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitP(10), _energyP(10), _attackP(0)
{
	std::cout << "constructor called: " << this->_name << " appears" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &ct)
{
	*this = ct;
	std::cout << "copy constructor called: a new " << this->_name << " appears" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "destructor called: " << this->_name << " vanish" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &ct)
{
	std::cout << "copy operator called: " << ct.getName() << "'s data files transfered" << std::endl;
	if (this != &ct)
	{
		setName(ct.getName());
		setHitP(ct.getHitP());
		setEnergyP(ct.getEnergyP());
		setAttackP(ct.getAttackP());
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitP(void) const
{
	return (this->_hitP);
}

unsigned int	ClapTrap::getEnergyP(void) const
{
	return (this->_energyP);
}

unsigned int	ClapTrap::getAttackP(void) const
{
	return (this->_attackP);
}

void	ClapTrap::setName(std::string const name)
{
	this->_name = name;
	return ;
}

void	ClapTrap::setHitP(unsigned int const hit)
{
	this->_hitP = hit;
	return ;
}

void	ClapTrap::setEnergyP(unsigned int energy)
{
	this->_energyP = energy;
	return ;
}

void	ClapTrap::setAttackP(unsigned int attack)
{
	this->_attackP = attack;
	return ;
}

void	ClapTrap::attack(std::string const &name)
{
	if (getHitP() == 0)
	{
		std::cout << getName() << " is in bad shape, it might be good to give up!" << std::endl;
		return ;
	}
	if (getEnergyP() > 0)
	{
		std::cout << "ClapTrap " << getName() << " attacks " << name << ", causing " << getAttackP() << " points of damage!" << std::endl;
		if (getAttackP() == 0)
			std::cout << "So no fuss about it, really!" << std::endl;
		setEnergyP(getEnergyP() - 1);
	}
	else
		std::cout << getName() << " is exausted, he can't do anything anymore!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitP() == 0)
		std::cout << getName() << " is already down, leave him in peace you monster!" << std::endl;
	else if (getHitP() > amount)
	{
		setHitP(getHitP() - amount);
		std::cout << getName() << " has been hit, but is still in his feet!" << std::endl;
	}
	else
	{
		setHitP(0);
		std::cout << getName() << " has been hit, and defeated!" << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (getHitP() == 0)
	{
		std::cout << getName() << " is in bad shape, it might be good to leave him!" << std::endl;
		return ;
	}
	if (getEnergyP() > 0)
	{
		std::cout << getName() << " repairs itself, gaining " << amount << " hit points back!" << std::endl;
		this->setHitP(this->getHitP() + amount);
		setEnergyP(getEnergyP() - 1);
	}
	else
		std::cout << getName() << " is exausted, he can't do anything anymore!" << std::endl;
	return ;
}
