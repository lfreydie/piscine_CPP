/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:01:37 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/13 15:43:08 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

int main(void)
{
	// std::cout << "----------- START ----------\n" << std::endl;
	// ClapTrap	black("black");
	// ClapTrap	clone(black);
	// ScavTrap	jack("Jack");
	// ScavTrap	bernard("Bernard");
	// FragTrap	luck("Luck");
	// FragTrap	antoine("Antoine");
	// black.setAttackP(2);
	// clone.setAttackP(6);
	// jack.setAttackP(40);
	// luck.setAttackP(40);

	// std::cout << "\n---------- VALUES ---------\n" << std::endl;
	// std::cout << "Black        : " << black.getHitP() << " hit points left, " << black.getAttackP() << " attack points and " << black.getEnergyP() << " energy points" << std::endl;
	// std::cout << "Black's clone: " << clone.getHitP() << " hit points left, " << clone.getAttackP() << " attack points and " << clone.getEnergyP() << " energy points" << std::endl;
	// std::cout << "Jack         : " << jack.getHitP() << " hit points left, " << jack.getAttackP() << " attack points and " << jack.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Bernard      : " << bernard.getHitP() << " hit points left, " << bernard.getAttackP() << " attack points and " << bernard.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Luck         : " << luck.getHitP() << " hit points left, " << luck.getAttackP() << " attack points and " << luck.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Antoine      : " << antoine.getHitP() << " hit points left, " << antoine.getAttackP() << " attack points and " << antoine.getEnergyP() << " energy points"  << std::endl;

	// std::cout << "\n-------- 1st ROUND --------\n" << std::endl;

	// black.attack(clone.getName());
	// clone.takeDamage(black.getAttackP());
	// std::cout << std::endl;
	// clone.attack(black.getName());
	// black.takeDamage(clone.getAttackP());
	// std::cout << std::endl;
	// black.beRepaired(2);

	// std::cout << "\n---------- VALUES ---------\n" << std::endl;
	// std::cout << "Black        : " << black.getHitP() << " hit points left and " << black.getEnergyP() << " energy points" << std::endl;
	// std::cout << "Black's clone: " << clone.getHitP() << " hit points left and " << clone.getEnergyP() << " energy points" << std::endl;
	// std::cout << "Jack         : " << jack.getHitP() << " hit points left and " << jack.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Bernard      : " << bernard.getHitP() << " hit points left and " << bernard.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Luck         : " << luck.getHitP() << " hit points left and " << luck.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Antoine      : " << antoine.getHitP() << " hit points left and " << antoine.getEnergyP() << " energy points"  << std::endl;

	// std::cout << "\n-------- 2nd ROUND --------\n" << std::endl;

	// jack.attack(bernard.getName());
	// bernard.takeDamage(jack.getAttackP());
	// std::cout << std::endl;
	// bernard.attack(black.getName());
	// black.takeDamage(bernard.getAttackP());
	// std::cout << std::endl;
	// bernard.beRepaired(20);

	// std::cout << "\n---------- VALUES ---------\n" << std::endl;
	// std::cout << "Black        : " << black.getHitP() << " hit points left and " << black.getEnergyP() << " energy points" << std::endl;
	// std::cout << "Black's clone: " << clone.getHitP() << " hit points left and " << clone.getEnergyP() << " energy points" << std::endl;
	// std::cout << "Jack         : " << jack.getHitP() << " hit points left and " << jack.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Bernard      : " << bernard.getHitP() << " hit points left and " << bernard.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Luck         : " << luck.getHitP() << " hit points left and " << luck.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Antoine      : " << antoine.getHitP() << " hit points left and " << antoine.getEnergyP() << " energy points"  << std::endl;

	// std::cout << std::endl;
	// luck.highFivesGuys();
	// antoine.highFivesGuys();
	// std::cout << "\n-------- 3rd ROUND --------\n" << std::endl;

	// antoine.attack(luck.getName());
	// luck.takeDamage(antoine.getAttackP());
	// std::cout << std::endl;
	// antoine.attack(clone.getName());
	// clone.takeDamage(antoine.getAttackP());
	// std::cout << std::endl;
	// luck.beRepaired(10);
	// std::cout << std::endl;
	// luck.attack(antoine.getName());
	// antoine.takeDamage(luck.getAttackP());
	// std::cout << std::endl;
	// antoine.beRepaired(20);

	// std::cout << "\n---------- VALUES ---------\n" << std::endl;
	// std::cout << "Black        : " << black.getHitP() << " hit points left and " << black.getEnergyP() << " energy points" << std::endl;
	// std::cout << "Black's clone: " << clone.getHitP() << " hit points left and " << clone.getEnergyP() << " energy points" << std::endl;
	// std::cout << "Jack         : " << jack.getHitP() << " hit points left and " << jack.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Bernard      : " << bernard.getHitP() << " hit points left and " << bernard.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Luck         : " << luck.getHitP() << " hit points left and " << luck.getEnergyP() << " energy points"  << std::endl;
	// std::cout << "Antoine      : " << antoine.getHitP() << " hit points left and " << antoine.getEnergyP() << " energy points"  << std::endl;

	// std::cout << "\n------------ END ----------\n" << std::endl;
	DiamondTrap	jenny("Jenny");

	jenny.whoAmI();
	jenny.attack("Jack");
	jenny.beRepaired(3);
	std::cout << "Jenny      : " << jenny.getHitP() << " hit points left and " << jenny.getEnergyP() << " energy points"  << std::endl;
	std::cout << "Jenny      : " << jenny.getAttackP() << " attack point"  << std::endl;
}
