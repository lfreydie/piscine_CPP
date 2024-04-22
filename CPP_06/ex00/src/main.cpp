/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:11:18 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/22 16:31:23 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [input]" << std::endl;
		return (1);
	}
	ScalarConverter::convert(av[1]);
	// (void)ac;
	// (void)av;
	// std::cout << "CONVERT FROM CHAR" << std::endl;
	// ScalarConverter::convert("a");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << "CONVERT FROM INT" << std::endl;
	// ScalarConverter::convert("0");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << "CONVERT FROM DOUBLE" << std::endl;
	// ScalarConverter::convert("42.42");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << "CONVERT FROM FLOAT" << std::endl;
	// ScalarConverter::convert("42.0f");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << "CONVERT FROM NaN" << std::endl;
	// ScalarConverter::convert("nan");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << "CONVERT FROM -INF" << std::endl;
	// ScalarConverter::convert("-inf");
	// std::cout << "-----------------------------------------------" << std::endl;

	// std::cout << "CONVERT FROM +inf" << std::endl;
	// ScalarConverter::convert("+INF");
	// std::cout << "-----------------------------------------------" << std::endl;
	return (0);
}
