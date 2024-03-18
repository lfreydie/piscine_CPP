/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:18:35 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/18 19:13:28 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
	Animal();
	Animal(Animal const &src);
	virtual				~Animal();

	Animal				&operator=(Animal const &rhc);
	std::string			getType() const;
	void				setType(std::string type);
	virtual void		makeSound() const = 0;
};
