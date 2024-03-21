/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:23:06 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/21 22:09:44 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

// int main()
// {
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	// return 0;
// }

// int main() {
// {
// 	std::cout << "-----------TEST POOL 1-----------" << std::endl;

// 	std::cout << "\nCreating a MateriaSource src and learning Materia Ice and Materia Cure" << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	std::cout << "\nCreating 2 Characters : Bill and Boule" << std::endl;
// 	Character* bill = new Character("Bill");
// 	Character* boule = new Character("Boule");

// 	std::cout << "\nTrying to create Materia 'lava' and to add it to Bill materias." << std::endl;
// 	AMateria* tmp;
// 	tmp = src->createMateria("lava");
// 	bill->equip(tmp);
// 	std::cout << "\nTrying to create Materia 'ice' and to add it to Bill materias." << std::endl;
// 	tmp = src->createMateria("ice");
// 	bill->equip(tmp);
// 	std::cout << "\nTrying to create Materia 'cure' and to add it to Bill materias." << std::endl;
// 	tmp = src->createMateria("cure");
// 	bill->equip(tmp);

// 	std::cout << "\nBill using his 2 Materias from his materias array [0], then [1], then [8]" << std::endl;
// 	bill->use(0, *boule);
// 	bill->use(1, *boule);
// 	bill->use(8, *boule);

// 	std::cout << "\nCreating new Character Bill2" << std::endl;
// 	Character* bill2 = new Character("Nico");
// 	std::cout << "\nTrying to create Materia 'cure' and to add it to Bill2 materias." << std::endl;
// 	tmp = src->createMateria("cure");
// 	bill2->equip(tmp);
// 	std::cout << "\nTrying to create Materia 'ice' and to add it to Bill2 materias." << std::endl;
// 	tmp = src->createMateria("ice");
// 	bill2->equip(tmp);


// 	std::cout << "\nBill2 using his 2 Materias from his materias array [0], then [1]" << std::endl;
// 	bill2->use(0, *boule);
// 	bill2->use(1, *boule);

// 	std::cout << "\nCopying Bill2 from Bill" << std::endl;
// 	*bill2 = *bill;

// 	std::cout << "\nDeleting Bill" << std::endl;
// 	delete bill;

// 	std::cout << "\nBill2 using his 2 Materias from his materias array [0], then [1]" << std::endl;
// 	bill2->use(0, *boule);
// 	bill2->use(1, *boule);

// 	std::cout << "\nDeleting Bill2 & Boule\n" << std::endl;
// 	delete src;
// 	delete bill2;
// 	delete boule;
// 	return (0);
// }
// {
// 	std::cout << "\n-----------TEST POOL 2-----------" << std::endl;

// 	std::cout << "\nCreating a MateriaSource src and learning Materia Ice and Materia Cure" << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	std::cout << "\nCreating Characters : 'me'" << std::endl;
// 	ICharacter* me = new Character("me");

// 	std::cout << "\nTrying to create Materia 'lava' and to add it to me materias." << std::endl;
// 	AMateria* tmp;
// 	tmp = src->createMateria("lava");
// 	me->equip(tmp);
// 	std::cout << "\nTrying to create Materia 'ice' and to add it to me materias." << std::endl;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	std::cout << "\nTrying to create Materia 'cure' and to add it to me materias." << std::endl;
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	std::cout << "\nCreating Characters : 'bob'" << std::endl;
// 	ICharacter* bob = new Character("bob");

// 	std::cout << "\nMe using materias[0] and [1] on bob" << std::endl;
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	std::cout << "\nDeleting bob, me and src" << std::endl;
// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }
// }


int	main(void)
{
	// Test des construction et destruction des Materias et Materia Source
	std::cout << "Test des construction et destruction des Materias et Materia Source"
	<< std::endl << std::endl;
	IMateriaSource* src = new MateriaSource();

	AMateria *ice_1 = new Ice();
	AMateria *ice_2 = new Ice(*((Ice *)ice_1));
	AMateria *cure_1 = new Cure();
	AMateria *cure_2 = cure_1->clone();

	src->learnMateria(ice_1);
	src->learnMateria(cure_1);

	AMateria *ice_3 = src->createMateria("ice");
	std::cout << "type de ice_3: "<< ice_3->getType() << std::endl;

	AMateria *cure_3 = src->createMateria("cure");
	std::cout << "type de cure_2: "<< cure_2->getType() << std::endl;

	delete ice_2;
	delete ice_3;
	delete cure_2;
	delete cure_3;

	// Test de la partie Character
	std::cout << std::endl << std::endl;
	std::cout << "Test de la partie Character" << std::endl << std::endl;
	Character character_1("Juv");
	Character character_2("Tiff");
	Character character_3("Nico");

	character_1.equip(src->createMateria("ice"));
	character_1.equip(src->createMateria("cure"));

	character_1.use(0, character_2);
	character_1.use(1, character_2);
	character_1.use(2, character_2);

	std::cout << "		character_3 = character_1; --> Test de la copie profonde" << std::endl;
	character_3 = character_1;
	character_3.use(0, character_2);
	character_3.use(1, character_2);
	character_3.use(2, character_2);

	std::cout << "		character_3 = character_2; -->ca va supprimer tous les equip" << std::endl;
	character_3 = character_2;
	character_3.use(0, character_2);
	character_3.use(1, character_2);
	character_3.use(2, character_2);


	AMateria* follen_materia;
	std::cout << "		Juv (character 1) fait tomber son ice (possition 1)" << std::endl;
	follen_materia = character_1.getMateria(0);
	if (follen_materia)
		character_1.unequip(0);

	std::cout << "		Tiff rammasse l'ice tombe et la prend" << std::endl;
	character_2.equip(follen_materia);
	character_2.use(0, character_1);
	character_2.use(1, character_1);

	std::cout << "		Test de la creation par recopie" << std::endl;
	Character character_4(character_1);
	character_4.use(0, character_2);
	character_4.use(1, character_2);
	character_4.use(2, character_2);
	character_4.use(3, character_2);

	delete src;
	return (0);
}
