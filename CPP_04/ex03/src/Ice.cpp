/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:22:05 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/19 14:35:08 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor called" << std::endl;
	this->setType("ice");
	return ;
}

Ice::Ice(Ice const& src)
{
	std::cout << "Ice copy constructor called"<< std::endl;
	*this = src;
	return ;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

Ice	&Ice::operator=(Ice const& i)
{
	std::cout <<"Ice assignation operator called" << std::endl;
	if (this != &i)
		this->setType(i._type);
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *n = new Ice(*this);
	return (n);
}

void	Ice::use(ICharacter& target)
{
	std::cout << this->getType() << ": \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
	return ;
}
