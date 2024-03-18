/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:43:21 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/18 18:50:19 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(Brain const &src);
	~Brain();

	Brain		&operator=(Brain const &b);
	std::string	getIdea(int index) const;
	void		setIdea(int index, std::string idea);
};
