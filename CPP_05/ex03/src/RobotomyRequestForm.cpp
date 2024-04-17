/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:15:56 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/04 18:55:19 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("target")
{
	std::cout << "Robotomy request form default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Robotomy request form parametric constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src): AForm("RobotomyRequestForm", 72, 45), _target(src._target)
{
	std::cout << "Robotomy request form copy constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy request form destructor called" << std::endl;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const& rrf)
{
	std::cout << "Robotomy request form assignation operator called" << std::endl;
	if (this != &rrf)
		_target = rrf._target;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	try
	{
		this->checkExecute(executor);
		std::cout << "...some drilling noises..." << std::endl;
		srand(time(NULL));
		bool	success = rand() % 2;
		if (success)
			std::cout << this->_target << " has been robotomised succesfully" << std::endl;
		else
			std::cout << this->_target << " has not been robotomised, it failed" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
		throw AForm::ExecutionFailed();
	}
}

std::ostream	&operator<<(std::ostream& o, RobotomyRequestForm const& b)
{
	o << "target: " << b.getTarget() << ", " << std::endl;
	o << static_cast<AForm const&>(b);
	return (o);
}
