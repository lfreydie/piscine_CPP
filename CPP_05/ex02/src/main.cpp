/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:57:10 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/04 18:56:54 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void ShrubberyOK()
{
	Bureaucrat Nico("Nico", 1);
	ShrubberyCreationForm Home_N("Home_N");
	try
	{
		Nico.signForm(Home_N);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Nico.executeForm(Home_N);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void ShrubberyKO()
{
	Bureaucrat Jules("Jules", 138);
	ShrubberyCreationForm Home_J("Home_J");
	try
	{
		Jules.signForm(Home_J);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Jules.executeForm(Home_J);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		 Jules.gradeUp();
		 Jules.executeForm(Home_J);
	}
	catch (const std::exception &e)
	{
		 std::cerr << e.what() << '\n';
	}
}

void RobotomyOK()
{
	Bureaucrat Alan("Alan", 45);
	RobotomyRequestForm home_A("home_TA");
	try
	{
		Alan.signForm(home_A);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Alan.executeForm(home_A);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void RobotomyKO()
{
	Bureaucrat Tiff("Tiff", 148);
	RobotomyRequestForm Home_T("Home_T");
	try
	{
		Tiff.signForm(Home_T);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Tiff.executeForm(Home_T);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void PresidentialOK()
{
	Bureaucrat Tito("Tito", 5);
	PresidentialPardonForm Home_T("Home_T");
	try
	{
		Tito.signForm(Home_T);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Tito.executeForm(Home_T);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void PresidentialKO()
{
	Bureaucrat Marie("Marie", 8);
	PresidentialPardonForm Home_M("Home_M");
	try
	{
		Marie.signForm(Home_M);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Marie.executeForm(Home_M);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	try
	{
		// srand(time(0));
		std::cout << "\t\t\t\t TEST \n" << std::endl;

		std::cout << "1. Shrubbery Form Test - OK:" << std::endl;
		try
		{
			ShrubberyOK();
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "2. Shrubbery Form Test - KO:" << std::endl;
		try
		{
			ShrubberyKO();
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "3. Robotomy Form Test - OK:" << std::endl;
		try
		{
			RobotomyOK();
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "4. Robotomy Form Test - KO:" << std::endl;
		try
		{
			RobotomyKO();
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "5. Presidential Form Test - OK:" << std::endl;
		try
		{
			PresidentialOK();
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "6. Presidential Form Test - KO:" << std::endl;
		try
		{
			PresidentialKO();
		}
		catch(const std::exception &e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}
