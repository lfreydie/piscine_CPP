#include <iostream>
#include "../includes/Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	int n = 5;
	Array<int> array(n);
	Array<int> other;
	std::cout << "original array" << std::endl;
	for (int i = 0; i < array.size(); ++i) {
		array[i] = i;
		std::cout << array[i] << std::endl;
	}
	Array<int> copy(array);
	std::cout << "copy const array" << std::endl;
	for (int i = 0; i < copy.size(); ++i) {
		std::cout << copy[i] << std::endl;
	}
	try {
		std::cout << "trying to print other[0]" << std::endl; 
		std::cout << other[0] << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	other = copy;
	std::cout << "assignment array" << std::endl;
	for (int i = 0; i < other.size(); ++i) {
		std::cout << other[i] << std::endl;
	}
	std::cout << "other const array" << std::endl;
	for (int i = 0; i < other.size(); ++i) {
		other[i] = other.size() - i;
		std::cout << other[i] << std::endl;
	}
	std::cout << "copy const array" << std::endl;
	for (int i = 0; i < copy.size(); ++i) {
		std::cout << copy[i] << std::endl;
	}
	try {
		std::cout << array[-1] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
