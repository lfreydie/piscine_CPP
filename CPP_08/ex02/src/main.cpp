#include "../includes/MutantStack.hpp"

void stack_example_deque()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
}

void stack_example_list()
{
	MutantStack<int, std::list<int> > mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int, std::list<int> >::iterator it = mstack.begin();
	MutantStack<int, std::list<int> >::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int, std::list<int> > s(mstack);
}

void list_example()
{
	std::list<int> l_ex;
	l_ex.push_back(5);
	l_ex.push_back(17);
	std::cout << l_ex.back() << std::endl;
	l_ex.pop_back();
	std::cout << l_ex.size() << std::endl;
	l_ex.push_back(3);
	l_ex.push_back(5);
	l_ex.push_back(737);
	l_ex.push_back(0);
	std::list<int>::iterator it = l_ex.begin();
	std::list<int>::iterator ite = l_ex.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::list<int> s(l_ex);
}

int main()
{
	std::cout << "\t\tStack Test Example (with container_type = deque):" << std::endl;
	stack_example_deque();

	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << "\t\tStack Test Example (with container_type = list):" << std::endl;
	stack_example_list();

	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << "\t\tList Test Example:" << std::endl;
	list_example();

	return (0);
}
