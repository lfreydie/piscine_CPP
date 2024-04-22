/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:28:57 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/19 19:08:06 by lefreydier       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	(void)src;
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	return ;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
	return ;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &sc)
{
	(void)sc;
	std::cout << "ScalarConverter assignation operator called" << std::endl;
	return (*this);
}

StringType	ScalarConverter::detectType(std::string const &str)
{
	std::istringstream	iss(str);
	bool				(*type[4])(std::istringstream &iss) = {isChar, isInt, isFloat, isDouble};
	int					i;

	for (i = 0; i < 4; i++)
	{
		iss.str(str);
		iss.clear();
		if (type[i](iss))
			return (static_cast<StringType>(i));
	}
	return (static_cast<StringType>(i));
}

bool	ScalarConverter::isChar(std::istringstream &iss)
{
	char	c;
	iss >> c;
	(void)c;
	return (!iss.fail() && iss.eof());
}

bool	ScalarConverter::isInt(std::istringstream &iss)
{
	int	i;
	iss >> i;
	(void)i;
	return (!iss.fail() && iss.eof());
}

bool	ScalarConverter::isFloat(std::istringstream &iss)
{
	float	f;
	iss >> f;
	(void)f;
	return (!iss.fail() && iss.eof());
}

bool	ScalarConverter::isDouble(std::istringstream &iss)
{
	double	d;
	iss >> d;
	(void)d;
	return (!iss.fail() && iss.eof());
}

void	ScalarConverter::convertChar(char &c)
{
	printInt(static_cast<int>(c));
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}

void	ScalarConverter::convertInt(int &i)
{
	printChar(static_cast<char>(i));
	printFloat(static_cast<float>(i));
	printDouble(static_cast<double>(i));
}

void	ScalarConverter::convertFloat(float &f)
{
	printChar(static_cast<char>(f));
	printInt(static_cast<int>(f));
	printDouble(static_cast<double>(f));
}

void	ScalarConverter::convertDouble(double &d)
{
	printChar(static_cast<char>(d));
	printInt(static_cast<int>(d));
	printFloat(static_cast<float>(d));
}

void	ScalarConverter::printChar(char c)
{
	std::cout << "char: " << c << std::endl;
}

void	ScalarConverter::printInt(int i)
{
	std::cout << "int: " << i << std::endl;
}

void	ScalarConverter::printFloat(float f)
{
	std::cout << "float: " << f << std::endl;
}

void	ScalarConverter::printDouble(double d)
{
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::convert(std::string &str)
{
	StringType	str_type = detectType(str);
	switch (str_type)
	{
	case Char:
		convertChar(str[0]);
		break;
	case Int:
		convertInt(std::stoi(str));
		break;
	case Float:
		convertFloat(std::stof(str));
		break;
	case Double:
		convertDouble(std::stod(str));
		break;
	default:
		std::cout << "Unknown type" << std::endl;
		break;
	}
}
