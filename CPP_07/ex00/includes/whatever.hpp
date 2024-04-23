/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:46:48 by lfreydie          #+#    #+#             */
/*   Updated: 2024/04/23 14:09:37 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;
	a = b;
	b = tmp;
};

template<typename T>
T	&min(T &a, T &b) {return ((a<b) ? a : b);};

template<typename T>
T	&max(T &a, T &b) {return ((a>b) ? a : b);};
