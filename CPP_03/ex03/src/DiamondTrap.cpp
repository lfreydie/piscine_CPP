/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:49:05 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/06 10:55:30 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "diamondtrap constructor called" << std::endl;
	this->ClapTrap::_name += "_clap_name";
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &dt): ClapTrap(dt.ClapTrap::_name) ,ScavTrap(dt.ClapTrap::_name), FragTrap(dt.ClapTrap::_name)
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
