/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:19:11 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/18 18:35:43 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	virtual			~WrongAnimal();

	WrongAnimal		&operator=(WrongAnimal const &wa);
	std::string		getType() const;
	void			setType(std::string type);
	void			makeSound() const;
};
