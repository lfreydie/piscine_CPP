/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:57:10 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/29 18:03:32 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		std::cout << "-------------START-------------\n" << std::endl;
		std::cout << "Creating bureaucrats:\n" << std::endl;
		Bureaucrat	henry("Henry", 70);
		Bureaucrat	clark("Clark", 20);
		try
		{
			std::cout << "\n1. Creating Form with grade to sign too high" << std::endl;
			Form	form1("f01", 0, 40);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << '\n' << std::endl;
		}
		try
		{
			std::cout << "\n2. Creating Form with grade to sign too low" << std::endl;
			Form	form2("f02", 160, 40);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << '\n' << std::endl;
		}
			try
		{
			std::cout << "\n3. Creating Form with grade to execute too high" << std::endl;
			Form	form3("f03", 40, 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << '\n' << std::endl;
		}
		try
		{
			std::cout << "\n4. Creating Form with grade to execute too low" << std::endl;
			Form	form4("f04", 60, 410);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << '\n' << std::endl;
		}
		try
		{
			std::cout << "\n5. Testing bureaucrat signing process" << std::endl;
			Form	form5("f05", 60, 50);
			henry.signForm(form5);
			clark.signForm(form5);
			henry.signForm(form5);
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n' << std::endl;
		}
	std::cout << "\n--------------END--------------\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
}
