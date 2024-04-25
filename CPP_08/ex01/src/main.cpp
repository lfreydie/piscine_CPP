#include "../includes/Span.hpp"

//int main()
//{
//	Span sp = Span(5);
//	sp.addNumber(6);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
//	return (0);
//}

int main()
{
	try
	{
		try
		{
			std ::cout << "TEST GIVING BY THE EXERCISE\n" << std::endl;

			Span sp = Span(5);

			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(9);
			sp.addNumber(17);
			sp.addNumber(11);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "-----------------------------------------------" << std::endl;
		try
		{
			std ::cout << "TEST FULL SPAN\n" << std::endl;

			Span sp1 = Span(2);

			sp1.addNumber(10);
			sp1.addNumber(15);
			sp1.addNumber(100); // should throw an exception
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "-----------------------------------------------" << std::endl;
		try
		{
			std ::cout << "TEST NO DISTANCE AVAILABLE SPAN\n" << std::endl;

			Span sp3 = Span(1);

			// should make an exception
			std::cout << sp3.shortestSpan() << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "-----------------------------------------------" << std::endl;
		try
		{
			std ::cout << "TEST WITH ITERATOR PLAGE\n" << std::endl;

			Span sp4 = Span(5);
			std::vector<int> numbersToAdd;
			numbersToAdd.push_back(6);
			numbersToAdd.push_back(3);
			numbersToAdd.push_back(9);
			numbersToAdd.push_back(17);
			numbersToAdd.push_back(11);
			sp4.addNumber(numbersToAdd.begin(), numbersToAdd.end());

			std::cout << sp4.shortestSpan() << std::endl;
			std::cout << sp4.longestSpan() << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "-----------------------------------------------" << std::endl;
		try
		{
				std ::cout << "TEST FOR 10 000\n" << std::endl;

				srand(time(NULL));
				Span sp(10000, 1000);
				// std::cout << sp << std::endl; // if you want to print the vector
				std::cout << sp.shortestSpan() << std::endl;
				std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
