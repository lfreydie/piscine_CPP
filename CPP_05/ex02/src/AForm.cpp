/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:35:12 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/04 18:51:15 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():_name("name"), _signed(false), _gradeS(150), _gradeX(150)
{
	std::cout << "AForm default constructor called" << std::endl;
	return ;
}

AForm::AForm(std::string name, int gradeS, int gradeX): _name(name), _signed(false), _gradeS(gradeS), _gradeX(gradeX)
{
	std::cout << "AForm parametric constructor called" << std::endl;
	if (gradeS < 1 || gradeX <1)
		throw	AForm::GradeTooHighException();
	else if (gradeS > 150 || gradeX > 150)
		throw	AForm::GradeTooLowException();
	return ;
}

AForm::AForm(AForm const& src): _name(src.getName()), _gradeS(src.getGradeS()), _gradeX(src.getGradeX())
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = src;
	return ;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
	return ;
}

const char*	AForm::ExecutionFailed::what() const throw()
{
	return ("execution failed");
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("grade too high");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("grade too low");
}

const char*	AForm::AlreadySignedException::what() const throw()
{
	return ("form is already signed");
}

const char*	AForm::NotSignedException::what() const throw()
{
	return ("form is not signed yet");
}

AForm&	AForm::operator=(AForm const& b)
{
	std::cout << "AForm assignation operator called" << std::endl;
	if (this != &b)
	{
		this->_signed = b._signed;
	}
	return (*this);
}

std::string const	AForm::getName() const
{
	return (this->_name);
}

unsigned int	AForm::getGradeS() const
{
	return (this->_gradeS);
}


unsigned int	AForm::getGradeX() const
{
	return (this->_gradeX);
}

bool	AForm::isSigned() const
{
	return (this->_signed);
}

void	AForm::checkExecute(Bureaucrat const& b) const
{
	if (!isSigned())
		throw	AForm::NotSignedException();
	if (b.getGrade() > getGradeX())
		throw	AForm::GradeTooLowException();
}

void	AForm::beSigned(Bureaucrat const& b)
{
	if (isSigned())
		throw	AForm::AlreadySignedException();
	if (getGradeS() >= b.getGrade())
		_signed = true;
	else
		throw	AForm::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& o, AForm const& b)
{
	o << "name: " << b.getName() << ", grade to be signed: " << b.getGradeS();
	o << ", grade to execute: " << b.getGradeX();
	o << " and sign status: " << b.isSigned();
	return (o);
}
