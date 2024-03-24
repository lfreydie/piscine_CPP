/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:35:12 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/24 17:15:04 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_name("name"), _gradeS(150), _gradeX(150), _signed(false)
{
	std::cout << "Form default constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, int gradeS, int gradeX): _name(name), _gradeS(gradeS), _gradeX(gradeX), _signed(false)
{
	std::cout << "Form parametric constructor called" << std::endl;
	if (gradeS < 1 || gradeX <1)
		throw	Form::GradeTooHighException();
	else if (gradeS > 150 || gradeX > 150)
		throw	Form::GradeTooLowException();
	return ;
}

Form::Form(Form const& src): _gradeS(src.getGradeS()), _gradeX(src.getGradeX())
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
	return ("Form : Grade too high !");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Form : Grade too low !");
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

unsigned int const	Form::getGradeS() const
{
	return (this->_gradeS);
}


unsigned int const	Form::getGradeX() const
{
	return (this->_gradeX);
}

bool	Form::isSigned() const
{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat& b)
{
	try
	{
		if (this->getGradeS() >= b.getGrade())
			this->_signed = true;
		else
			throw	Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream&	operator<<(std::ostream& o, Form const& b)
{
	o << b.getName() << ", Form grade to be signed is " << b.getGradeS();
	o << ", grade to execute is " << b.getGradeX();
	o << " and until now, is sign status is " << b.isSigned();
	return (o);
}
