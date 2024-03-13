/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:33:09 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/13 19:51:37 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &ft);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &ft);
	void		highFivesGuys(void);
};

#endif
