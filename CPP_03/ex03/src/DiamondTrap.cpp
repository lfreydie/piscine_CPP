/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:49:05 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/13 15:59:40 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "diamondtrap constructor called" << std::endl;
	this->ClapTrap::_name += "_clap_name";
	this->_hitP = this->FragTrap::_hitP;
	this->_attackP = this->FragTrap::_attackP;
	this->_energyP = this->ScavTrap::_energyP;
	return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "diamondtrap constructor called" << std::endl;
	this->_name = _name;
	ClapTrap::_name += "_clap_name";
	this->_energyP = ScavTrap::getEnergyP();
	this->_hitP = FragTrap::getHitP();
	this->_attackP = FragTrap::getAttackP();
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &dt): ClapTrap(dt.ClapTrap::_name), ScavTrap(dt.ClapTrap::_name), FragTrap(dt.ClapTrap::_name)
{
	std::cout << "diamondtrap copy constructor called" << std::endl;
	*this = dt;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "diamondtrap destructor called" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &dt)
{
		std::cout << "copy operator called: " << dt.getName() << "'s data files transfered" << std::endl;
	if (this != &dt)
	{
		setName(dt.getName());
		setHitP(dt.getHitP());
		setEnergyP(dt.getEnergyP());
		setAttackP(dt.getAttackP());
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << " and my Claptrap name is " << this->ClapTrap::_name << std::endl;
	return ;
}
