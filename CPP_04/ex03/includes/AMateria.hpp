/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:25:16 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/19 10:58:19 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string const	_type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	virtual	~AMateria();

	AMateria			operator=(AMateria const &AM);
	std::string const	&getType() const;
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};
