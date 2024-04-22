/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:18:25 by lfreydie          #+#    #+#             */
/*   Updated: 2024/04/22 19:03:33 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <iostream>
#include <stdlib.h>

class Base
{
public:
	virtual ~Base() {};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate();
void	identify(Base *p);
void	identify(Base &p);
