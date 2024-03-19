/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:49:22 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/19 10:59:05 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class ICharacter
{
protected:
	std::string const	_name;
	AMateria			*_materia[4];
public:
	ICharacter();
	ICharacter(std::string const name);
	ICharacter(ICharacter const &src);
	virtual						~ICharacter() {}
	ICharacter					&operator=(ICharacter const &ic);

	virtual std::string const	&getName() const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter& target) = 0;
};
