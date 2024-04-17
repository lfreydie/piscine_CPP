/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:27:20 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/17 13:21:23 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <iomanip>

class RobotomyRequestForm: public	AForm
{
private:
	std::string				_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& src);
	~RobotomyRequestForm();

	RobotomyRequestForm	&operator=(RobotomyRequestForm const& rrf);
	std::string			getTarget() const;
	void				execute(Bureaucrat const& executor) const;
};

std::ostream	&operator<<(std::ostream& o, RobotomyRequestForm const& b);
