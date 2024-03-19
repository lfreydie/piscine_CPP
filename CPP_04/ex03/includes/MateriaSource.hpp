/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:16:02 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/19 13:19:26 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource const& src);
	~MateriaSource();

	MateriaSource&	operator=(MateriaSource const* ms);
	void			learnMateria(AMateria*);
	AMateria*		createMateria(std::string const& type);
};
