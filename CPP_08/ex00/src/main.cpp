#include "../includes/easyfind.hpp"

int 	main()
{
	std::cout << "TEST WITH LIST\n" << std::endl;
	std::list<int>	l;
	l.push_back(90);
	l.push_back(76);
	l.push_back(12);
	l.push_back(128);
	std::cout << "Test to find an existing number = 12" << std::endl; 
	int n = 12;
	try{
		std::list<int>::iterator it = easyfind(l, n);
		std::cout << "Result=" << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "Test to find an existing number = 76" << std::endl; 
	n = 76;
	try{
		std::list<int>::iterator it = easyfind(l, n);
		std::cout << "Result=" << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "Test to find an nonexistent number = 89" << std::endl; 
	n = 89;
	try{
		std::list<int>::iterator it = easyfind(l, n);
		std::cout << "Result=" << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nTEST WITH VECTOR\n" << std::endl;
	std::vector<int>	vec;
	vec.push_back(42);
	vec.push_back(67);
	vec.push_back(420);
	vec.push_back(4);
	vec.push_back(2);
	vec.push_back(88);
	std::cout << "Test to find an existing number = 2" << std::endl; 
	n = 2;
	try{
		std::vector<int>::iterator it = easyfind(vec, n);
		std::cout << "Result=" << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "Test to find an existing number = 4" << std::endl; 
	n = 4;
	try{
		std::vector<int>::iterator it = easyfind(vec, n);
		std::cout << "Result=" << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "Test to find an nonexistent number = 9" << std::endl; 
	n = 9;
	try{
		std::vector<int>::iterator it = easyfind(vec, n);
		std::cout << "Result=" << *it << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}
