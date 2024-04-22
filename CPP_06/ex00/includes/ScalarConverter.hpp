/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:48:05 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/22 16:27:14 by lfreydie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <sstream>

enum StringType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN
};

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const& src);
	~ScalarConverter();

	ScalarConverter		&operator=(ScalarConverter const &sc);

	// parse input
	static StringType	detectType(char const *input);
	static bool			isChar(std::istringstream &iss, char const *input);
	static bool			isInt(std::istringstream &iss, char const *input);
	static bool			isFloat(std::istringstream &iss, char const *input);
	static bool			isDouble(std::istringstream &iss, char const *input);
	static StringType	isUnknown(char const *input);
	static bool			hasADot(float f);
	static bool			hasADot(double d);

	// convert
	static void			convertChar(char const *input);
	static void			convertInt(char const *input);
	static void			convertFloat(char const *input);
	static void			convertDouble(char const *input);

public:
	static void		convert(char const *input);
};
