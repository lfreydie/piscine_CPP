/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:08:31 by lfreydie          #+#    #+#             */
/*   Updated: 2024/02/25 16:41:39 by lefreydier       ###   ########.fr       */
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

	//surchage d'opérateur d'affectation
	Fixed				&operator=(Fixed const &fx);

	// surchage d'opérateur arithmétique
	Fixed				operator+(Fixed const &fx);
	Fixed				operator-(Fixed const &fx);
	Fixed				operator*(Fixed const &fx);
	Fixed				operator/(Fixed const &fx);

	// surchage d'opérateur de comparaison
	bool				operator>(Fixed const &fx) const;
	bool				operator<(Fixed const &fx) const;
	bool				operator>=(Fixed const &fx) const;
	bool				operator<=(Fixed const &fx) const;
	bool				operator==(Fixed const &fx) const;
	bool				operator!=(Fixed const &fx) const;

	// surchage d'opérateur d'incrémentation
	Fixed				&operator++(void);
	Fixed				operator++(int);
	Fixed				&operator--(void);
	Fixed				operator--(int);

	int					getRawBits( void ) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fx);

#endif
