#include "../includes/Span.hpp"

Span::Span(): _n(0)
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

void 	Span::addNumber(int nb)
{
	if (this->_v.size() < this->_n)
		this->_v.push_back(nb);
	else
		throw NoDistanceFound();
}

void 	Span::addNumber(std::vector<int> first, std::vector<int> last)
{
	std::vector<int>::iterator v_end = this->_v.end() - 1;
	int 	n = std::distance(first, last);
	if (n >= 0 && this->_v.size() + n < this->_n)
		this->_v.insert(v_end, first, last);
	else
		throw CouldNotInsert();
}

int 	Span::shortestSpan() const
{
	if (this->_v.size() <= 1)
		throw NoDistanceFound();
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
		throw NoDistanceFound();
	std::vector<int>	sort = this->_v;
	std::sort(sort.begin(), sort.end());
	return (*(sort.end() - 1) - *(sort.begin()));
}
