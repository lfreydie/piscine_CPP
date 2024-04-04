/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:27:58 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/04 18:39:36 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "AForm.hpp"

class PresidentialPardonForm: public	AForm
{
private:
	std::string				_target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& src);
	~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(PresidentialPardonForm const& ppf);
	std::string				getTarget() const;
	void					execute(Bureaucrat const& executor) const;
};

std::ostream	&operator<<(std::ostream& o, PresidentialPardonForm const& b);
