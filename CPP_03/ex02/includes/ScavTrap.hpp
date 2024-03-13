/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:31:22 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/13 19:51:47 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &st);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &st);
	void		attack(const std::string &target);
	void		guardGate(void);
};

#endif
