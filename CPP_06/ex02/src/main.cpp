/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:39:01 by lfreydie          #+#    #+#             */
/*   Updated: 2024/04/22 19:05:09 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main()
{
	srand((time(NULL)));
	std ::cout << "CLASS INDENTIFIICATION TEST" << std::endl;
	Base *p[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << "p" << i << ": ";
		p[i] = generate();
	}

	std::cout << "class identification via pointer function:" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "p" << i << ": ";
		identify(p[i]);
	}

	std::cout << "class identification via reference function:" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "p" << i << ": ";
		identify(*p[i]);
	}

	std::cout << "undefined type via pointer and reference :" << std::endl;

	Base p10;
	identify(p10);
	identify(&p10);

	for (int i = 0; i < 10; i++)
	{
		delete p[i];
	}

	return (0);
}
