/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:48:05 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/19 19:08:17 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <limits.h>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <sstream>

enum StringType
{
	Char,
	Int,
	Float,
	Double,
	Unknown
};

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const& src);
	~ScalarConverter();

	ScalarConverter		&operator=(ScalarConverter const &sc);

	// parse input
	static StringType	detectType(std::string const &str);
	static bool			isChar(std::istringstream &iss);
	static bool			isInt(std::istringstream &iss);
	static bool			isFloat(std::istringstream &iss);
	static bool			isDouble(std::istringstream &iss);

	// convert
	static void			convertChar(char &c);
	static void			convertInt(int &i);
	static void			convertFloat(float &f);
	static void			convertDouble(double &d);

	// prints
	static void			printChar(char);
	static void			printInt(int);
	static void			printFloat(float);
	static void			printDouble(double);

public:
	static void		convert(std::string &str);
};
