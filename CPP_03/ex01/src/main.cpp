/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:01:37 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/05 20:35:19 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main(void)
{
	std::cout << "----------- START ----------\n" << std::endl;
	ClapTrap	black("black");
	ClapTrap	clone(black);
	ScavTrap	jack("Jack");
	ScavTrap	bernard("Bernard");
	jack.setAttackP(40);
	black.setAttackP(2);
	clone.setAttackP(6);

	std::cout << "\n---------- VALUES ---------\n" << std::endl;
	std::cout << "Black        : " << black.getHitP() << " hit points left, " << black.getAttackP() << " attack points and " << black.getEnergyP() << " energy points" << std::endl;
	std::cout << "Black's clone: " << clone.getHitP() << " hit points left, " << clone.getAttackP() << " attack points and " << clone.getEnergyP() << " energy points" << std::endl;
	std::cout << "Jack         : " << jack.getHitP() << " hit points left, " << jack.getAttackP() << " attack points and " << jack.getEnergyP() << " energy points"  << std::endl;
	std::cout << "Bernard      : " << bernard.getHitP() << " hit points left, " << bernard.getAttackP() << " attack points and " << bernard.getEnergyP() << " energy points"  << std::endl;

	std::cout << "\n-------- 1st ROUND --------\n" << std::endl;

	black.attack(clone.getName());
	clone.takeDamage(black.getAttackP());
	std::cout << std::endl;
	clone.attack(black.getName());
	black.takeDamage(clone.getAttackP());
	std::cout << std::endl;
	black.beRepaired(2);

	std::cout << "\n---------- VALUES ---------\n" << std::endl;
	std::cout << "Black        : " << black.getHitP() << " hit points left and " << black.getEnergyP() << " energy points" << std::endl;
	std::cout << "Black's clone: " << clone.getHitP() << " hit points left and " << clone.getEnergyP() << " energy points" << std::endl;
	std::cout << "Jack         : " << jack.getHitP() << " hit points left and " << jack.getEnergyP() << " energy points"  << std::endl;
	std::cout << "Bernard      : " << bernard.getHitP() << " hit points left and " << bernard.getEnergyP() << " energy points"  << std::endl;

	std::cout << "\n-------- 2nd ROUND --------\n" << std::endl;

	jack.attack(bernard.getName());
	bernard.takeDamage(jack.getAttackP());
	std::cout << std::endl;
	bernard.attack(black.getName());
	black.takeDamage(bernard.getAttackP());
	std::cout << std::endl;
	bernard.beRepaired(20);

	std::cout << "\n---------- VALUES ---------\n" << std::endl;
	std::cout << "Black        : " << black.getHitP() << " hit points left and " << black.getEnergyP() << " energy points" << std::endl;
	std::cout << "Black's clone: " << clone.getHitP() << " hit points left and " << clone.getEnergyP() << " energy points" << std::endl;
	std::cout << "Jack         : " << jack.getHitP() << " hit points left and " << jack.getEnergyP() << " energy points"  << std::endl;
	std::cout << "Bernard      : " << bernard.getHitP() << " hit points left and " << bernard.getEnergyP() << " energy points"  << std::endl;

	std::cout << "\n------------ END ----------\n" << std::endl;
}
