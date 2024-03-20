/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:16:02 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/20 18:20:00 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria			*_materiaMemory[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const& src);
	~MateriaSource();

	MateriaSource&	operator=(MateriaSource const& ms);
	void			learnMateria(AMateria*);
	AMateria*		createMateria(std::string const& type);
};
