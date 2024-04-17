/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:40:16 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/17 13:25:42 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern const& src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
	return ;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
	return ;
}

Intern	&Intern::operator=(Intern const& i)
{
	(void)i;
	std::cout << "Intern assignation operator called" << std::endl;
	return (*this);
}

AForm	*Intern::makeForm(std::string fname, std::string target)
{
	std::string const	constructorName[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm				*form;
	int					i;

	for(i = 0; i < 3; i++)
	{
		if (fname == constructorName[i])
			break;
	}
	switch (i)
	{
		case 0:
			form = new PresidentialPardonForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new ShrubberyCreationForm(target);
			break;
		default:
			std::cout << "the form name is incorrect" << std::endl;
			return (NULL);
	}
	std::cout << "Intern creates " << form->getName() << std::endl;
	return (form);
}
