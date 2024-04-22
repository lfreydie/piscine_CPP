/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:20:21 by lfreydie          #+#    #+#             */
/*   Updated: 2024/04/22 18:13:28 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include <iomanip>

struct Data
{
	std::string	value;
	int			value_int;
};

class Serializer
{
private:
	Serializer();
	Serializer(Serializer const &src);
	~Serializer();

	Serializer	&operator=(Serializer const &s);
public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};
