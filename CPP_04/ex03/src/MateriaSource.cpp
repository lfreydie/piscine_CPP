/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:11:30 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/20 18:26:42 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		_materiaMemory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
	return ;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materiaMemory[i])
			delete _materiaMemory[i];
	}
	return ;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& ms)
{
	std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &ms)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materiaMemory[i])
				delete (_materiaMemory[i]);
			_materiaMemory[i] = (ms._materiaMemory[i]) ? ms._materiaMemory[i]->clone() : NULL;
		}
	}
	return (*this);
}
void			MateriaSource::learnMateria(AMateria* src)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materiaMemory[i])
		{
			this->_materiaMemory[i] = src;
			break ;
		}
	}
	return ;
}
AMateria*		MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materiaMemory[i] && this->_materiaMemory[i]->getType() == type)
			return (this->_materiaMemory[i]->clone());
	}
	return (NULL);
}
