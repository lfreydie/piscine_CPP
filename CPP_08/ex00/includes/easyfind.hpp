#pragma once

#include <iostream>
#include <iomanip>
#include <exception>
#include <vector>
#include <list>

class NoMatch : public std::exception
{
public:
	virtual const char *what() const throw() {return ("No match found");};
};

template<typename T>
typename T::iterator	easyfind(T &obj, int n);

#include "../src/easyfind.tpp"
