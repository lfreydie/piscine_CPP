/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:09:20 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/20 18:14:11 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
public:
virtual				~IMateriaSource() {}
virtual void		learnMateria(AMateria*) = 0;
virtual AMateria*	createMateria(std::string const & type) = 0;
};
