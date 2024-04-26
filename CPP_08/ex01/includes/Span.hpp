#pragma once

#include <iostream>
#include <iomanip>
#include <vector>
#include <exception>
#include <algorithm>
#include <limits>
#include <iterator>

class Span
{
	private:
	unsigned int _n;
	std::vector<int>	_v;
	public:
	Span();
	Span(unsigned int n);
	Span(unsigned int n, int nb);
	Span(Span const &src);
	~Span();

	Span &operator=(Span const &rhs);
	std::vector<int>	get_v() const;
	unsigned int 		get_n() const;
	class NoDistanceFound: public std::exception
	{
	private:
		std::string 	_msg;
	public:
		NoDistanceFound():_msg("No distance found") {};
		NoDistanceFound(std::string msg):_msg(msg) {};
		virtual ~NoDistanceFound() throw() {};
		virtual char const 	*what() const throw() {return (_msg.c_str());};
	};
	class WrongRange: public std::exception
	{
	private:
		std::string 	_msg;
	public:
		WrongRange():_msg("Range error") {};	
		WrongRange(std::string msg):_msg(msg) {};	
		virtual ~WrongRange() throw() {};
		virtual char const 	*what() const throw() {return (_msg.c_str());};
	};
	void	addNumber(int nb);
	void	addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
	int 	shortestSpan() const;
	int 	longestSpan() const;
};

std::ostream 	&operator<<(std::ostream &o, Span const &rhs);
