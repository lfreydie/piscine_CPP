#pragma once

template<typename T>
Array<T>::Array():_array(NULL), _size(0)
{
	std::cout << "Array default constructor called" << std::endl;
	return ;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Array parametric constructor called" << std::endl;
	this->_size = n;
	this->_array = new T[n];
	if (!this->_array)
		throw std::exception();
	return ;
}

template<typename T>
Array<T>::Array(Array<T> const &src):_array(NULL), _size(0)
{
	std::cout << "Array copy constructor called" << std::endl;
	*this = src;
	return ;
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "Array destructor called" << std::endl;
	if (_array)
		delete [] _array;
	return ;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array<T> const &a)
{
	std::cout << "Array assignation operator called" << std::endl;
	if (this != &a)
	{
		if (this->_array)
			delete [] this->_array;
		this->_size = a._size;
		if (a._size > 0)
		{
			this->_array = new T[a._size];
			if (!this->_array)
				throw std::exception();
			for (unsigned int i = 0; i < a._size; i++)
			{
				this->_array[i] = a._array[i];
			}
		}
		else
			this->_array = NULL;
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int id) const
{
	if (id >= this->_size)
		throw std::out_of_range("out of range");
	else
		return (this->_array[id]);
}

template<typename T>
int 	Array<T>::size()
{
	return (this->_size);
}
