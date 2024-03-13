/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:30:02 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/05 19:30:29 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "scavtrap constructor called" << std::endl;
	this->_hitP = 100;
	this->_energyP = 50;
	this->_attackP = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &st): ClapTrap(st._name)
{
	*this = st;
	std::cout << "copy scavtrap constructor called: a new " << this->_name << " appears" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "scavtrap destructor called: " << this->_name << " vanish" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &st)
{
	std::cout << "copy operator called: " << st.getName() << "'s data files transfered" << std::endl;
	if (this != &st)
	{
		setName(st.getName());
		setHitP(st.getHitP());
		setEnergyP(st.getEnergyP());
		setAttackP(st.getAttackP());
	}
	return (*this);
}


void	ScavTrap::attack(std::string const &name)
{
	if (getHitP() == 0)
	{
		std::cout << getName() << " is in bad shape, it might be good to give up!" << std::endl;
		return ;
	}
	if (getEnergyP() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << name << ", causing " << getAttackP() << " points of damage!" << std::endl;
		if (getAttackP() == 0)
			std::cout << "So no fuss about it, really!" << std::endl;
		setEnergyP(getEnergyP() - 1);
	}
	else
		std::cout << getName() << " is exausted, he can't do anything anymore!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "Scavtrap " << getName() << " is now on Gate keeper mode." << std::endl;
	return ;
}
