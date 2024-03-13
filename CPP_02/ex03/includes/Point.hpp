/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:44:09 by lefreydier        #+#    #+#             */
/*   Updated: 2024/02/27 15:38:59 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
	Fixed	_x;
	Fixed	_y;
public:
	Point(void);
	Point(float x, float y);
	Point(Point const &p);
	~Point(void);

	Point	&operator=(Point const &p);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
