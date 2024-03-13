/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:31:39 by lefreydier        #+#    #+#             */
/*   Updated: 2024/02/07 18:27:45 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_number(void) const
{
	return (this->_number);
}

std::string	Contact::get_secret(void) const
{
	return (this->_secret);
}

void	Contact::set_first_name(std::string new_first_name)
{
	this->_first_name = new_first_name;
	return ;
}

void	Contact::set_last_name(std::string new_last_name)
{
	this->_last_name = new_last_name;
	return ;
}

void	Contact::set_nickname(std::string new_nickname)
{
	this->_nickname = new_nickname;
	return ;
}

void	Contact::set_number(std::string new_number)
{
	this->_number = new_number;
	return ;
}

void	Contact::set_secret(std::string new_secret)
{
	this->_secret = new_secret;
	return ;
}
