/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:46:15 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/18 19:01:38 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal		*beast[10];
	std::cout << "\n----------------START----------------\n" << std::endl;
	std::cout << "----------------Init-----------------\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			beast[i] = new Dog();
		else
			beast[i] = new Cat();
		std::cout << std::endl;
	}
	std::cout << "\n----------------Sound----------------\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		beast[i]->makeSound();
	}
	std::cout << "\n----------------Delete----------------\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete beast[i];
	}
	std::cout << "\n-----------------END-----------------\n" << std::endl;
	return 0;
}
