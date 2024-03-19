/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:56:24 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/19 14:23:00 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(Ice const &src);
	~Ice();

	Ice			&operator=(Ice const &i);
	AMateria	*clone() const;
	void		use(ICharacter& target);
};
