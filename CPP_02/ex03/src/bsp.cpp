/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:45:25 by lefreydier        #+#    #+#             */
/*   Updated: 2024/02/27 16:20:03 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

float	getW1(Point const a, Point const b, Point const c, Point const point)
{
	float	w1;

	w1 = a.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + \
		((point.getY().toFloat() - a.getY().toFloat()) * (c.getX().toFloat() - a.getX().toFloat())) - \
		point.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat());
	w1 /= (b.getY().toFloat() - a.getY().toFloat()) * (c.getX().toFloat() - a.getX().toFloat()) - \
		(b.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat());
	// std::cout << "w1 = " << w1 << std::endl;
	return (w1);
}

float	getW2(Point const a, Point const b, Point const c, Point const point, float const w1)
{
	float	w2;

	w2 = point.getY().toFloat() - a.getY().toFloat() - w1 * (b.getY().toFloat() - a.getY().toFloat());
	w2 /= c.getY().toFloat() - a.getY().toFloat();
	// std::cout << "w2 = " << w2 << std::endl;
	return (w2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float const	w1 = getW1(a, b, c, point);
	float const	w2 = getW2(a, b, c, point, w1);

	return (w1 > 0 && w2 > 0 && (w1 + w2) < 1);
}

