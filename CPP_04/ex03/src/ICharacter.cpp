/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:37:06 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/19 18:03:18 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter():_name ("name")
{
	std::cout << "ICharacter default constructor" << std::endl;
	return ;
}

ICharacter::ICharacter(std::string const name): _name(name)
{
	std::cout << "ICharacter parametric constructor" << std::endl;
	return ;
}


