#pragma once

#include <algorithm>
#include "../includes/easyfind.hpp"

template<typename T>
typename T::iterator	easyfind(T &obj, int n)
{
	typename T::iterator 	it = std::find(obj.begin(), obj.end(), n);
	if (it == obj.end())
		throw NoMatch();
	return (it);
}
