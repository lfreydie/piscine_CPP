/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:28:57 by lefreydier        #+#    #+#             */
/*   Updated: 2024/04/22 17:06:06 by lfreydie         ###   ########.fr       */
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

StringType	ScalarConverter::detectType(char const *input)
{
	std::istringstream	iss(input);
	bool				(*type[4])(std::istringstream &iss, char const *input) = {isChar, isInt, isFloat, isDouble};
	int					i;

	for (i = 0; i < 4; i++)
	{
		iss.str(input);
		iss.clear();
		if (type[i](iss, input))
			return (static_cast<StringType>(i));
	}
	return (isUnknown(input));
}

bool	ScalarConverter::isChar(std::istringstream &iss, char const *input)
{
	char	c;

	(void)c;
	iss >> c;
	return (!iss.fail() && (strlen(input) == 1));
}

bool	ScalarConverter::isInt(std::istringstream &iss, char const *input)
{
	int	i;
	iss >> i;
	(void)i;
	(void)input;
	return (!iss.fail() && iss.eof());
}

bool	ScalarConverter::isFloat(std::istringstream &iss, char const *input)
{
	float	f;
	char	c[2];

	(void)f;
	(void)input;
	iss >> f;
	if (!iss.fail())
	{
		iss >> c;
		return (!iss.fail() && iss.eof() && !strcmp(c, "f"));
	}
	return (false);
}

bool	ScalarConverter::isDouble(std::istringstream &iss, char const *input)
{
	double	d;
	iss >> d;
	(void)d;
	(void)input;
	return (!iss.fail() && iss.eof());
}

StringType	ScalarConverter::isUnknown(char const *input)
{
	if (input)
	{
		if (!strcmp(input, "+inf") || !strcmp(input, "-inf") || !strcmp(input, "nan"))
			return (DOUBLE);
		else if (!strcmp(input, "+inff") || !strcmp(input, "-inff") || !strcmp(input, "nanf"))
			return (FLOAT);
	}
	return (UNKNOWN);
}

bool	ScalarConverter::hasADot(float f)
{
	std::stringstream	ss;

	if (f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity())
		return (0);
	ss << f;
	return (ss.str().find('.') == std::string::npos && ss.str().find('n') == std::string::npos && ss.str().find('e') == std::string::npos);
}

bool	ScalarConverter::hasADot(double d)
{
	std::stringstream	ss;

	if (d == std::numeric_limits<double>::infinity() || d == -std::numeric_limits<double>::infinity())
		return (0);
	ss << d;
	return (ss.str().find('.') == std::string::npos && ss.str().find('n') == std::string::npos && ss.str().find('e') == std::string::npos);
}

void	ScalarConverter::convertChar(char const *input)
{
	char	c = input[0];

	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::convertInt(char const *input)
{
	long	l = atol(input);
	if (l > std::numeric_limits<int>::max() || l < std::numeric_limits<int>::min())
	{
		std::cerr << "Error: impossible to convert" << std::endl;
		return ;
	}
	int		i = atoi(input);
	if (i >= 32 && i <= 126)
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else if (i < 0 || i > 255)
		std::cout << "char: Impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;

}

void	ScalarConverter::convertFloat(char const *input)
{
	double	d = strtod(input, NULL);
	if ((d > std::numeric_limits<float>::max() && hasADot(d)) || (d < std::numeric_limits<float>::min() && hasADot(d)))
	{
		std::cerr << "Error: impossible to convert" << std::endl;
		return ;
	}
	float	f = atof(input);
	if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min() || !strcmp(input, "nanf"))
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
	}
	else
	{
		if (f >= 32 && f <= 126)
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		else if (f < 0 || f > 255 || !strcmp(input, "nanf"))
			std::cout << "char: Impossible" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	}
	std::cout << "float: " << f << (hasADot(f) ? ".0f" : "f") << std::endl;
	std::cout << "double: " << d << (hasADot(d) ? ".0" : "") << std::endl;
}

void	ScalarConverter::convertDouble(char const *input)
{
	long double	ld = strtold(input, NULL);
	double	d = strtod(input, NULL);
	if ((ld > std::numeric_limits<double>::max() && hasADot(d)) || (ld < std::numeric_limits<double>::min() && hasADot(d)))
	{
		std::cerr << "Error: impossible to convert" << std::endl;
		return ;
	}
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min()  || !strcmp(input, "nan"))
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
	}
	else
	{
		if (isprint(d))
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		else if (d < 0 || d > 255  || !strcmp(input, "nan"))
			std::cout << "char: Impossible" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	}
	if ((d > std::numeric_limits<float>::max() && hasADot(d)) || (d < std::numeric_limits<float>::min() && hasADot(d)))
		std::cout << "float: Impossible" << std::endl;
	else
	{
		float f = static_cast<float>(d);
		std::cout << "float: " << f << (hasADot(f) ? ".0f" : "f") << std::endl;
	}
	std::cout << "double: " << d << (hasADot(d) ? ".0" : "") << std::endl;
}

void	ScalarConverter::convert(const char *input)
{
	StringType	str_type = detectType(input);
	switch (str_type)
	{
	case CHAR:
		convertChar(input);
		break;
	case INT:
		convertInt(input);
		break;
	case FLOAT:
		convertFloat(input);
		break;
	case DOUBLE:
		convertDouble(input);
		break;
	default:
		std::cerr << "Unknown type" << std::endl;
		break;
	}
}
