/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:01:37 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/05 20:35:58 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
	std::cout << "----------- START ----------\n" << std::endl;
	ClapTrap	black("black");
	ClapTrap	clone(black);
	clone.setAttackP(6);
	black.setAttackP(2);
	std::cout << "\n---------- VALUES ---------\n" << std::endl;
	std::cout << "Black        : " << black.getHitP() << " hit points left, " << black.getAttackP() << " attack points and " << black.getEnergyP() << " energy points" << std::endl;
	std::cout << "Black's clone: " << clone.getHitP() << " hit points left, " << clone.getAttackP() << " attack points and " << clone.getEnergyP() << " energy points" << std::endl;

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

	std::cout << "\n------------ END ----------\n" << std::endl;
}
