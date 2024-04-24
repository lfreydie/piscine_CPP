#pragma once

#include <exception>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

template<typename T>
class Array
{
private:
	T		*_array;
	unsigned int 	_size;
public:
	Array();
	Array(unsigned int n);
	Array(Array<T> const &src);
	~Array();

	Array		&operator=(Array<T> const &a);
	T		&operator[](unsigned int id) const;
	int 		size();

};

#include "../src/Array.tpp"
