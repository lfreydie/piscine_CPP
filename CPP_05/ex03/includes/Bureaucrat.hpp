/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:35:17 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/04 18:36:33 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AForm;

class Bureaucrat
{
private:
	std::string const	_name;
	unsigned int		_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& src);
	~Bureaucrat();

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
	Bureaucrat				&operator=(Bureaucrat const& b);
	std::string const		getName() const;
	unsigned int			getGrade() const;
	void					gradeUp();
	void					gradeUp(unsigned int amount);
	void					gradeDown();
	void					gradeDown(unsigned int amount);
	void					signForm(AForm& f);
	void					executeForm(AForm& f);
};

std::ostream	&operator<<(std::ostream&o, Bureaucrat const& b);
