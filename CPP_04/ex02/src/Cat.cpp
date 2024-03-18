/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:15:44 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/18 19:05:12 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(const Cat &src): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete (this->_brain);
	return ;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		for (int i = 0; i < 100; i++)
		{
			this->_brain->setIdea(i, rhs._brain->getIdea(i));
		}
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->getType() << ": Miaou" << std::endl;
	return ;
}
