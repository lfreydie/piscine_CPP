/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:31:22 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/05 19:16:55 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &st);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &st);
	void		attack(const std::string &target);
	void		guardGate(void);
};

#endif
