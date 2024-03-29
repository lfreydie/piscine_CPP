/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:54:10 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/29 17:37:33 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form
{
private:
	std::string const	_name;
	bool				_signed;
	unsigned int const	_gradeS;
	unsigned int const	_gradeX;
public:
	Form();
	Form(std::string name, int gradeS, int gradeX);
	Form(Form const& src);
	~Form();
	Form				&operator=(Form const& b);

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	class AlreadySignedException: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	std::string const		getName() const;
	unsigned int			getGradeS() const;
	unsigned int			getGradeX() const;
	bool					isSigned() const;

	void					beSigned(Bureaucrat const& b);
};

std::ostream	&operator<<(std::ostream&o, Form const& b);
