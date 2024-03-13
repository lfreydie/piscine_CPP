/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:33:09 by lfreydie          #+#    #+#             */
/*   Updated: 2024/03/05 21:22:59 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &ft);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &ft);
	void		highFivesGuys(void);
};

#endif
