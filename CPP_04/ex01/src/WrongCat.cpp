/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:39:27 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/18 18:19:38 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &wc)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this != &wc)
		this->_type = wc.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << this->getType() << ": Miaou" << std::endl;
	return ;
}
