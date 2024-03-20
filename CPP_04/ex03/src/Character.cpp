/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:49:21 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/20 18:21:27 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("name")
{
	std::cout << "Character default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	return ;
}

Character::Character(std::string const name): _name(name)
{
	std::cout << "Character parametric constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	return ;
}

Character::Character(Character const& src)
{
	std::cout << "Character copy constructor" << std::endl;
	*this = src;
	return ;
}

Character::~Character()
{
	std::cout << "Character destructor" << std::endl;
	return ;
}

Character&	Character::operator=(Character const& c)
{
	std::cout << "Character assignation operator" << std::endl;
	if (this != &c)
	{
		_name = c.getName();
		for (int i = 0; i < 4; i++)
		{
			if (_materia[i])
				delete (_materia[i]);
			_materia[i] = (c._materia[i]) ? c._materia[i]->clone() : NULL;
		}
	}
	return (*this);
}

std::string const&	Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[i])
		{
			_materia[i] = m;
			break ;
		}
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_materia[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	_materia[idx]->use(target);
	return ;
}
