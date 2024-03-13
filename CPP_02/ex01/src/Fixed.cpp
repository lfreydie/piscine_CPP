 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:59 by lfreydie          #+#    #+#             */
/*   Updated: 2024/02/21 19:36:09 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nb): _value(nb << _fractionnals_bits)
{
	// std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const nb): _value(roundf(nb * (1 << _fractionnals_bits)))
{
	// std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fx)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fx;
	return ;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &fx)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fx)
		return (*this);
	this->_value = fx.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &value)
{
	o << value.toFloat();
	return (o);
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << _fractionnals_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> _fractionnals_bits);
}
