/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:16:49 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/19 10:58:01 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &src): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete (this->_brain);
	return ;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &rhs)
	{
		delete (this->_brain); // see how it must be handle
		this->_type = rhs._type;
		for (int i = 0; i < 100; i++)
		{
			this->_brain->setIdea(i, rhs._brain->getIdea(i));
		}
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->getType() << ": Wouf" << std::endl;
	return ;
}
