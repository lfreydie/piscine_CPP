/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:11:18 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/22 17:14:30 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	// if (ac != 2)
	// {
	// 	std::cout << "Usage: ./convert [input]" << std::endl;
	// 	return (1);
	// }
	// ScalarConverter::convert(av[1]);

	(void)ac;
	(void)av;

	std::cout << "CONVERT FROM CHAR" << std::endl;

	std::cout << "\ninput \"a\":" << std::endl;
	ScalarConverter::convert("a");
	std::cout << "\ninput \"nu\":" << std::endl;
	ScalarConverter::convert("nu");
	std::cout << "\ninput \"{\":" << std::endl;
	ScalarConverter::convert("{");
	std::cout << "\ninput \"@\":" << std::endl;
	ScalarConverter::convert("@");

	std::cout << "\n-----------------------------------------------\n" << std::endl;

	std::cout << "CONVERT FROM INT" << std::endl;

	std::cout << "\ninput \"0\":" << std::endl;
	ScalarConverter::convert("0");
	std::cout << "\ninput \"2147483647\":" << std::endl;
	ScalarConverter::convert("2147483647");
	std::cout << "\ninput \"-2147483648\":" << std::endl;
	ScalarConverter::convert("-2147483648");
	std::cout << "\ninput \"-2147483649\":" << std::endl;
	ScalarConverter::convert("-2147483649");

	std::cout << "\n-----------------------------------------------\n" << std::endl;

	std::cout << "CONVERT FROM FLOAT" << std::endl;

	std::cout << "\ninput \"42.0f\":" << std::endl;
	ScalarConverter::convert("42.0f");
	std::cout << "\ninput \"-4245865646.554640f\":" << std::endl;
	ScalarConverter::convert("-4245865646.554640f");
	std::cout << "\ninput \"1.797693e+8f\":" << std::endl;
	ScalarConverter::convert("1.797693e+8f");
	std::cout << "\ninput \"8.797693e-1f\":" << std::endl;
	ScalarConverter::convert("8.797693e-1f");

	std::cout << "\n-----------------------------------------------\n" << std::endl;

	std::cout << "CONVERT FROM DOUBLE" << std::endl;

	std::cout << "\ninput \"42.42\":" << std::endl;
	ScalarConverter::convert("42.42");
	std::cout << "\ninput \"2147483655.014\":" << std::endl;
	ScalarConverter::convert("2147483655.014");
	std::cout << "\ninput \"1.797693e+308\":" << std::endl;
	ScalarConverter::convert("1.797693e+308");
	std::cout << "\ninput \"1.797693e-3\":" << std::endl;
	ScalarConverter::convert("1.797693e-3");

	std::cout << "\n-----------------------------------------------\n" << std::endl;

	std::cout << "CONVERT FROM NaN" << std::endl;

	std::cout << "\ninput \"nan\":" << std::endl;
	ScalarConverter::convert("nan");
	std::cout << "\ninput \"nanf\":" << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << "\ninput \"NAN\":" << std::endl;
	ScalarConverter::convert("NAN");
	std::cout << "\ninput \"+nan\":" << std::endl;
	ScalarConverter::convert("+nan");
	std::cout << "\n-----------------------------------------------\n" << std::endl;

	std::cout << "CONVERT FROM INF" << std::endl;

	std::cout << "\ninput \"-inf\":" << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << "\ninput \"+inf\":" << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << "\ninput \"-inff\":" << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << "\ninput \"+inff\":" << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << "\n-----------------------------------------------\n" << std::endl;
	return (0);
}
