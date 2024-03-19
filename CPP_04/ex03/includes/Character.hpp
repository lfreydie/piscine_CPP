/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:21:19 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/19 13:24:12 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character: public ICharacter
{
public:
	Character();
	Character(std::string const name);
	Character(Character const& src);
	~Character();
	Character&			operator=(Character const &ic);

	std::string const&	getName() const = 0;
	void				equip(AMateria* m) = 0;
	void				unequip(int idx) = 0;
	void				use(int idx, ICharacter& target) = 0;
};
