/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:57:15 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/19 13:03:53 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(Cure const &src);
	~Cure();

	Cure		&operator=(Cure const &i);
	AMateria	*clone() const;
	void		use(ICharacter& target);
};
