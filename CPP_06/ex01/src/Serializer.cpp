/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:52:36 by lfreydie          #+#    #+#             */
/*   Updated: 2024/04/22 18:04:45 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer default constructor called" << std::endl;
}

Serializer::Serializer(Serializer const &src)
{
	std::cout << "Serializer copy constructor called" << std::endl;
	*this = src;
	return ;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
	return ;
}
Serializer	&Serializer::operator=(Serializer const &s)
{
	std::cout << "Serializer assignation operator called" << std::endl;
	(void)s;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));

}
