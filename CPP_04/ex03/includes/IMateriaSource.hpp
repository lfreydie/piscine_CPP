/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:09:20 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/19 13:15:30 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
protected:
	AMateria			*_materiaMemory[4];
public:
	IMateriaSource();
	IMateriaSource(IMateriaSource const &src);
	virtual				~IMateriaSource() {}

	IMateriaSource		&operator=(IMateriaSource const &ims);
	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
};
