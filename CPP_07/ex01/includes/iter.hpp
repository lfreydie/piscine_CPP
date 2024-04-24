/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:30:57 by lfreydie          #+#    #+#             */
/*   Updated: 2024/04/24 17:06:24 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <iostream>
#include <exception>

template<typename T>
void	print(T &value)
{
	std::cout << value << std::endl;
}

template<typename T,typename L, typename F>
void	iter(T	*array, L length, F ft)
{
	try
	{
		if (!array || length <= 0 || !ft)
			throw std::invalid_argument("invalid argument");
		for (L i = 0; i < length; i++)
			ft(array[i]);
	}
	catch(std::invalid_argument const &e)
	{
		std::cerr << e.what() << std::endl;
	}
};
