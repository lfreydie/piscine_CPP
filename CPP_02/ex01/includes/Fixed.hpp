/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:08:31 by lfreydie          #+#    #+#             */
/*   Updated: 2024/02/25 13:45:33 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_value;
	static int const	_fractionnals_bits = 8;
public:
	Fixed(void);
	Fixed(int const nb);
	Fixed(float const nb);
	Fixed(Fixed const &fx);
	~Fixed(void);

	Fixed				&operator=(Fixed const &fx);

	int					getRawBits( void ) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &value);

#endif
