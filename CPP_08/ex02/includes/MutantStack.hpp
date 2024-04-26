#pragma once

#include <iostream>
#include <iomanip>
#include <exception>
#include <stack>
#include <deque>
#include <list>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
public:
	MutantStack() {};
	MutantStack(MutantStack const &src): std::stack<T, Container>(src) {};
	~MutantStack() {};
	
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack &operator=(MutantStack const &rhs)
	{
		if (this != &rhs)
			std::stack<T, Container>::operator=(rhs);
	};

	iterator 	begin() {return std::stack<T, Container>::c.begin();};
	const_iterator 	begin() const {return std::stack<T, Container>::c.cbegin();};
	reverse_iterator 	rbegin() {return std::stack<T, Container>::c.rbegin();};
	const_reverse_iterator 	rbegin() const {return std::stack<T, Container>::c.crbegin();};

	iterator 	end() {return std::stack<T, Container>::c.end();};
	const_iterator 	end() const {return std::stack<T, Container>::c.cend();};
	reverse_iterator 	rend() {return std::stack<T, Container>::c.rend();};
	const_reverse_iterator 	rend() const {return std::stack<T, Container>::c.crend();};
};
