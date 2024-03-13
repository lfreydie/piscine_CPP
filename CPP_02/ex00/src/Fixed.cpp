/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:59 by lfreydie          #+#    #+#             */
/*   Updated: 2024/02/25 15:17:39 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fx)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fx;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &fx)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fx)
		return (*this);
	this->_value = fx.getRawBits();
	return (*this);
}
