/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 16:54:10 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/04 18:51:37 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

class Bureaucrat;

class AForm
{
private:
	std::string const	_name;
	bool				_signed;
	unsigned int const	_gradeS;
	unsigned int const	_gradeX;
public:
	AForm();
	AForm(std::string name, int gradeS, int gradeX);
	AForm(AForm const& src);
	virtual	~AForm();
	AForm				&operator=(AForm const& b);

	class ExecutionFailed: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
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
	class NotSignedException: public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	std::string const		getName() const;
	unsigned int			getGradeS() const;
	unsigned int			getGradeX() const;
	bool					isSigned() const;

	void					checkExecute(Bureaucrat const& b) const;
	void					beSigned(Bureaucrat const& b);
	virtual void			execute(Bureaucrat const& executor) const = 0;
};

std::ostream	&operator<<(std::ostream& o, AForm const& b);
