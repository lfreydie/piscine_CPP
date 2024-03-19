/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:34:16 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/19 14:35:33 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor called" << std::endl;
	this->setType("Cure");
	return ;
}

Cure::Cure(Cure const& src)
{
	std::cout << "Cure copy constructor called"<< std::endl;
	*this = src;
	return ;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

Cure	&Cure::operator=(Cure const& i)
{
	std::cout <<"Cure assignation operator called" << std::endl;
	if (this != &i)
		this->setType(i._type);
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria *n = new Cure(*this);
	return (n);
}

void	Cure::use(ICharacter& target)
{
	std::cout << this->getType() << ": \"* heals " << target.getName() << "'s wounds *\"" << std::endl;
	return ;
}
