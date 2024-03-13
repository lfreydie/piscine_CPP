/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:44:41 by lefreydier        #+#    #+#             */
/*   Updated: 2024/02/27 16:10:58 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point(void): _x(0), _y(0)
{
	// std::cout << "Default construtor" << std::endl;
	return ;
}

Point::Point(float const x, float const y): _x(x), _y(y)
{
	// std::cout << "Float construtor" << std::endl;
	return ;
}


Point::Point(Point const &p)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = p;
	return ;
}

Point::~Point(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Point	&Point::operator=(Point const &p)
{
	if (this == &p)
		return (*this);
	this->_x = p.getX();
	this->_y = p.getY();
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}
