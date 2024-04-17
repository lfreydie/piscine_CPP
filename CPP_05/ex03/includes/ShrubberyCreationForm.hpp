/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:22:59 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/17 13:21:04 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <iomanip>
#include <iostream>
#include <iomanip>
#include <iostream>
#include <fstream>

class ShrubberyCreationForm: public	AForm
{
private:
	std::string				_target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& src);
	~ShrubberyCreationForm();
	class FileNotOpen: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const& scf);
	std::string				getTarget() const;
	void					execute(Bureaucrat const& executor) const;
};

std::ostream	&operator<<(std::ostream& o, ShrubberyCreationForm const& b);
