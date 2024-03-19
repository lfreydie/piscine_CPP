/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:25:01 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/19 14:21:16 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
	return ;
}

AMateria::AMateria(std::string const& type): _type(type)
{
	std::cout << "AMateria parametric constructor called" << std::endl;
	return;
}

AMateria::AMateria(AMateria const& src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
	return ;
}

AMateria::~AMateria()
{
	std::cout << "Amateria destructor called" << std::endl;
	return ;
}

AMateria	&AMateria::operator=(AMateria const& am)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &am)
		this->setType(am._type);
	return (*this);
}

void	AMateria::setType(std::string const& type)
{
	this->_type = type;
	return ;
}

std::string const&	AMateria::getType() const
{
	return (this->_type);
}
