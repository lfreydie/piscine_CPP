/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:46:15 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/18 18:32:38 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal		*beast = new Animal();
	Animal		*felix = new Cat();
	Animal		*medor = new Dog();
	WrongAnimal	*noBeast = new WrongAnimal();
	WrongAnimal	*charles = new WrongCat();
	std::cout << "\n----------------START----------------\n" << std::endl;
	std::cout << "---------------Animal----------------\n" << std::endl;

	std::cout << "Beast type is " << beast->getType() << std::endl;
	beast->makeSound();
	std::cout << "Felix type is " << felix->getType() << std::endl;
	felix->makeSound();
	std::cout << "Medor type is " << medor->getType() << std::endl;
	medor->makeSound();

	std::cout << "\n-------------WrongAnimal-------------\n" << std::endl;

	std::cout << "NoBeast type is " << noBeast->getType() << std::endl;
	noBeast->makeSound();
	std::cout << "Charles type is " << charles->getType() << std::endl;
	charles->makeSound();
	std::cout << "\n-----------------END-----------------\n" << std::endl;
	delete beast;
	delete felix;
	delete medor;
	delete noBeast;
	delete charles;

	return 0;
}
