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
	class NoDistanceFound: std::exception
	{
		virtual char const 	*what() const throw() {return ("No distance found");};
	};
	class CouldNotInsert: std::exception
	{
		virtual char const 	*what() const throw() {return ("Couldn't insert range of iterators");};
	};
	void	addNumber(int nb);
	void	addNumber(std::vector<int> first, std::vector<int> last);
	int 	shortestSpan() const;
	int 	longestSpan() const;
};
