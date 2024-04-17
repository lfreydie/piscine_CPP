/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:29:17 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/04 18:55:19 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("target")
{
	std::cout << "Presidential pardon form default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Presidential pardon form parametric constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src): AForm("PresidentialPardonForm", 25, 5), _target(src._target)
{
	std::cout << "Presidential pardon form copy constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential pardon form destructor called" << std::endl;
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const& ppf)
{
	std::cout << "Presidential pardon form assignation operator called" << std::endl;
	if (this != &ppf)
		_target = ppf._target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	try
	{
		this->checkExecute(executor);
		std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
		throw AForm::ExecutionFailed();
	}
}

std::ostream	&operator<<(std::ostream& o, PresidentialPardonForm const& b)
{
	o << "target: " << b.getTarget() << ", " << std::endl;
	o << static_cast<AForm const&>(b);
	return (o);
}
