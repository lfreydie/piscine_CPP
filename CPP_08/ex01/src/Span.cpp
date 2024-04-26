#include "../includes/Span.hpp"

Span::Span(): _n(10000)
{
//	std::cout << "Span default constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int n): _n(n)
{
//	std::cout << "Span parametric constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int n, int nb): _n(n)
{
//	std::cout << "Span parametric constructor called" << std::endl;
	std::vector<int>	vec(n, nb);
	this->_v = vec;
	return ;
}

Span::Span(Span const &rhs)
{
//	std::cout << "Span copy constructor called" << std::endl;
	*this = rhs;
	return ;
}

Span::~Span()
{
//	std::cout << "Span destructor called" << std::endl;
}

Span 	&Span::operator=(Span const &rhs)
{
//	std::cout << "Span assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_v.clear();
		this->_v = rhs._v;
	}
	return (*this);
}

std::vector<int>	Span::get_v() const
{
	return (this->_v);
}

unsigned int 	Span::get_n() const
{
	return (this->_n);
}

void 	Span::addNumber(int nb)
{
	if (this->_v.size() < this->_n)
		this->_v.push_back(nb);
	else
		throw WrongRange("Couldn't insert new number: Range error");
}

void 	Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	std::vector<int>::iterator v_end = this->_v.begin() + this->_v.size();
	int 	n = std::distance(first, last);
	if (n >= 0 && (this->_v.size() + n) <= this->_n)
		this->_v.insert(v_end, first, last);
	else
		throw WrongRange("Couldn't insert new numbers: Range error");
}

int 	Span::shortestSpan() const
{
	if (this->_v.size() <= 1)
		throw NoDistanceFound("Not enough numbers contained: No distance found");
	int min = std::numeric_limits<int>::max();
	std::vector<int>	sort = this->_v;
	std::sort(sort.begin(), sort.end());
	for (std::vector<int>::iterator it = sort.begin(); (it + 1) != sort.end(); it++)
	{
		if ((*(it + 1) - *it) < min)
			min = *(it + 1) - *it;
	}
	return min;
}

int  	Span::longestSpan() const
{
	if (this->_v.size() <= 1)
		throw NoDistanceFound("Not enough numbers contained: No distance found");
	std::vector<int>	sort = this->_v;
	std::sort(sort.begin(), sort.end());
	return (*(sort.end() - 1) - *(sort.begin()));
}

std::ostream 	&operator<<(std::ostream &o, Span const &rhs)
{
	o << "vector contain: ";
	std::vector<int>::iterator it;
	for (it = rhs.get_v().begin(); it + 1 != rhs.get_v().end(); ++it)
		o << *it << ", ";
	o << *it;
	return o;
}
