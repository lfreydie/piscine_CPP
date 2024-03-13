/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:00:54 by lefreydier        #+#    #+#             */
/*   Updated: 2024/03/05 19:17:47 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitP;
	unsigned int	_energyP;
	unsigned int	_attackP;
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &ct);
	~ClapTrap();

	ClapTrap		&operator=(ClapTrap const &ct);
	std::string		getName(void) const;
	unsigned int	getHitP(void) const;
	unsigned int	getEnergyP(void) const;
	unsigned int	getAttackP(void) const;

	void			setName(std::string const name);
	void			setHitP(unsigned int const hit);
	void			setEnergyP(unsigned int const energy);
	void			setAttackP(unsigned int const attack);

	void			attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif
