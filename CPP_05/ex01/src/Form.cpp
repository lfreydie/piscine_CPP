/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:35:12 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/29 17:40:31 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():_name("name"), _signed(false), _gradeS(150), _gradeX(150)
{
	std::cout << "Form default constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, int gradeS, int gradeX): _name(name), _signed(false), _gradeS(gradeS), _gradeX(gradeX)
{
	std::cout << "Form parametric constructor called" << std::endl;
	if (gradeS < 1 || gradeX <1)
		throw	Form::GradeTooHighException();
	else if (gradeS > 150 || gradeX > 150)
		throw	Form::GradeTooLowException();
	return ;
}

Form::Form(Form const& src): _name(src.getName()), _gradeS(src.getGradeS()), _gradeX(src.getGradeX())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
	return ;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

const char*	Form::AlreadySignedException::what() const throw()
{
	return ("form is already signed");
}

Form&	Form::operator=(Form const& b)
{
	std::cout << "Form assignation operator called" << std::endl;
	if (this != &b)
	{
		this->_signed = b._signed;
	}
	return (*this);
}

std::string const	Form::getName() const
{
	return (this->_name);
}

unsigned int	Form::getGradeS() const
{
	return (this->_gradeS);
}


unsigned int	Form::getGradeX() const
{
	return (this->_gradeX);
}

bool	Form::isSigned() const
{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat const& b)
{
	if (isSigned())
		throw	Form::AlreadySignedException();
	if (getGradeS() >= b.getGrade())
		_signed = true;
	else
		throw	Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& o, Form const& b)
{
	o << b.getName() << ", Form grade to be signed is " << b.getGradeS();
	o << ", grade to execute is " << b.getGradeX();
	o << " and until now, is sign status is " << b.isSigned();
	return (o);
}
