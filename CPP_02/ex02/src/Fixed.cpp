/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:07:59 by lfreydie          #+#    #+#             */
/*   Updated: 2024/02/27 16:40:41 by lefreydier       ###   ########.fr       */
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

Fixed	Fixed::operator+(Fixed const &fx)
{
	return (Fixed(this->toFloat() + fx.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &fx)
{
	return (Fixed(this->toFloat() - fx.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &fx)
{
	return (Fixed(this->toFloat() * fx.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &fx)
{
	return (Fixed(this->toFloat() / fx.toFloat()));
}

bool	Fixed::operator>(Fixed const &fx) const
{
	return (this->_value > fx.getRawBits());
}

bool	Fixed::operator<(Fixed const &fx) const
{
	return (this->_value < fx.getRawBits());
}

bool	Fixed::operator>=(Fixed const &fx) const
{
	return (this->_value >= fx.getRawBits());
}

bool	Fixed::operator<=(Fixed const &fx) const
{
	return (this->_value <= fx.getRawBits());
}

bool	Fixed::operator==(Fixed const &fx) const
{
	return (this->_value == fx.getRawBits());
}

bool	Fixed::operator!=(Fixed const &fx) const
{
	return (this->_value != fx.getRawBits());
}

Fixed	&Fixed::operator++(void)
{
	float	tmp = this->toFloat();

	tmp++;
	this->_value = roundf(tmp * (1 << _fractionnals_bits));
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	before(*this);
	float	tmp = this->toFloat();

	tmp++;
	this->_value = roundf(tmp * (1 << _fractionnals_bits));
	return	(before);
}

Fixed	&Fixed::operator--(void)
{
	float	tmp = this->toFloat();

	tmp--;
	this->_value = roundf(tmp * (1 << _fractionnals_bits));
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	before(*this);
	float	tmp = this->toFloat();

	tmp--;
	this->_value = roundf(tmp * (1 << _fractionnals_bits));
	return (before);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fx)
{
	o << fx.toFloat();
	return (o);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	return ((a < b) ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	return ((a > b) ? a : b);
}
