/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:35:12 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/04 18:41:22 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("name"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	std::cout << "Bureaucrat parametric constructor called" << std::endl;
	if (grade < 1)
		throw	Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw	Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high !");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low !");
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& b)
{
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	if (this != &b)
	{
		this->_grade = b._grade;
	}
	return (*this);
}

std::string const	Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::gradeUp()
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void	Bureaucrat::gradeUp(unsigned int amount)
{
	if (this->_grade > amount)
		this->_grade -= amount;
	else
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void	Bureaucrat::gradeDown()
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}

void	Bureaucrat::gradeDown(unsigned int amount)
{
	if (this->_grade + amount <= 150)
		this->_grade += amount;
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}

void	Bureaucrat::signForm(AForm& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm& f)
{
	try
	{
		f.execute(*this);
		std::cout << _name << " executed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}
