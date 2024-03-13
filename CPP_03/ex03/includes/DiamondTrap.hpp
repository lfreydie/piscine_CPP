/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:48:39 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/05 21:23:49 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string		_name;
public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &dt);
	~DiamondTrap();

	DiamondTrap	&operator=(DiamondTrap const &dt);
	void	whoAmI();
};

#endif
