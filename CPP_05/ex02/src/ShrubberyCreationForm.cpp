/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:54:32 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/04 18:55:19 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 147, 137), _target("target")
{
	std::cout << "Shrubbery creation form default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 147, 137), _target(target)
{
	std::cout << "Shrubbery creation form parametric constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src): AForm("ShrubberyCreationForm", 147, 137), _target(src._target)
{
	std::cout << "Shrubbery creation form copy constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery creation form destructor called" << std::endl;
	return ;
}

const char*	ShrubberyCreationForm::FileNotOpen::what() const throw()
{
	return ("file didn't open");
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const& ppf)
{
	std::cout << "Shrubbery creation form assignation operator called" << std::endl;
	if (this != &ppf)
		_target = ppf._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	try
	{
		this->checkExecute(executor);
		std::string		name = _target + "_target";
		std::ofstream	ofs(name.c_str());
		if (!ofs.is_open())
			throw	ShrubberyCreationForm::FileNotOpen();
		ofs << "		                     ; ; ;\n\
		                   ;        ;  ;     ;;    ;\n\
		                ;                 ;         ;  ;\n\
		                                ;\n\
		                               ;                ;;\n\
		               ;          ;            ;              ;\n\
		               ;            ';,        ;               ;\n\
		               ;              'b      *\n\
		                ;              '$    ;;                ;;\n\
		               ;    ;           $:   ;:               ;\n\
		             ;;      ;  ;;      *;  @):        ;   ; ;\n\
		                          ;     :@,@):   ,;**:'   ;\n\
		              ;      ;,         :@@*: ;;**'      ;   ;\n\
		                       ';o;    ;:(@';@*\"'  ;\n\
		               ;  ;       'bq,;;:,@@*'   ,*      ;  ;\n\
		                          ,p$q8,:@)'  ;p*'      ;\n\
		                   ;     '  ; '@@Pp@@*'    ;  ;\n\
		                    ;  ; ;;    Y7'.'     ;  ;\n\
		                              :@):.\n\
		                             .:@:'.\n\
		                           .::(@:.\n\n\
		--------------------------------------------------------------------" << std::endl;
		ofs.close();
		std::cout << "Shrubbery Creation Form executed successfully" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
		throw AForm::ExecutionFailed();
	}
}

std::ostream	&operator<<(std::ostream& o, ShrubberyCreationForm const& b)
{
	o << "target: " << b.getTarget() << ", " << std::endl;
	o << static_cast<AForm const&>(b);
	return (o);
}
