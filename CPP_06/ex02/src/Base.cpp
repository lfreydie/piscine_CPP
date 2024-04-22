/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:28:32 by lfreydie          #+#    #+#             */
/*   Updated: 2024/04/22 19:05:35 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate()
{
	unsigned int random = rand() % 3;

	switch (random) {
		case 0:
			std::cout << "Class A created" << std::endl;
			return new A;
		case 1:
			std::cout << "Class B created" << std::endl;
			return new B;
		case 2:
			std::cout << "Class C created" << std::endl;
			return new C;
		default:
			return NULL;
	}
}

void	identify(Base *p)
{
	A	*ptrA = dynamic_cast<A*>(p);
	if (!ptrA)
	{
		B	*ptrB = dynamic_cast<B*>(p);
		if (!ptrB)
		{
			C	*ptrC = dynamic_cast<C*>(p);
			if (!ptrC)
				std::cout << "Type of p is undefined" << std::endl;
			else
				std::cout << "Type of p is C" << std::endl;
		}
		else
			std::cout << "Type of p is B" << std::endl;
	}
	else
		std::cout << "Type of p is A" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Type of p is A" << std::endl;
		return ;
	}
	catch(std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Type of p is B" << std::endl;
		return ;
	}
	catch(std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Type of p is C" << std::endl;
		return ;
	}
	catch(std::exception &e)
	{
		(void)e;
	}
	std::cout << "Type of p is undefined" << std::endl;
}
