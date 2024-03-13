/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:37:02 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/13 15:33:37 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "fragtrap constructor called" << std::endl;
	this->_hitP = 100;
	this->_energyP = 100;
	this->_attackP = 30;
	return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "fragtrap constructor called" << std::endl;
	this->_hitP = 100;
	this->_energyP = 100;
	this->_attackP = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const &ft): ClapTrap(ft._name)
{
	std::cout << "fragtrap copy constructor called" << std::endl;
	*this = ft;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "fragtrap destructor called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &ft)
{
	std::cout << "copy operator called: " << ft.getName() << "'s data files transfered" << std::endl;
	if (this != &ft)
	{
		setName(ft.getName());
		setHitP(ft.getHitP());
		setEnergyP(ft.getEnergyP());
		setAttackP(ft.getAttackP());
	}
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "Hey Guys! Isn't it time for a HIGH FIVE? I am " << getName() << " and I think so!" << std::endl;
	return ;
}
