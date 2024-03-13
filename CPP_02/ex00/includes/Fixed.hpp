/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:08:31 by lfreydie          #+#    #+#             */
/*   Updated: 2024/02/25 13:45:13 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_value;
	static int const	_fractionnals_bits = 8;
public:
	Fixed(void);
	Fixed(Fixed const &fx);
	~Fixed(void);

	int					getRawBits( void ) const;
	void				setRawBits(int const raw);
	Fixed				&operator=(Fixed const &fx);
};

#endif
