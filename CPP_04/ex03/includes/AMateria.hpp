/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:25:16 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/20 18:33:34 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string			_type;
public:
	AMateria();
	AMateria(std::string const& type);
	AMateria(AMateria const& src);
	virtual				~AMateria();

	AMateria&			operator=(AMateria const &am);
	void				setType(std::string const& type);
	std::string const&	getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};
