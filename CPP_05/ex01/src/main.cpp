
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	barry("Barry", 150);
		Bureaucrat	minnie("Minnie", 100);

		std::cout << "\n----------START----------" << std::endl;
		std::cout << "\n---------OUR TEAM--------\n" << std::endl;
		std::cout << barry << std::endl;
		std::cout << minnie << std::endl;

		std::cout << "\n-----------DAY 1---------\n" << std::endl;
		std::cout << "Barry gets promoted by 50 grades" << std::endl;
		try
		{
			barry.gradeUp(50);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout << "\nMinnie gets promoted by 80 grades" << std::endl;
		try
		{
			minnie.gradeUp(80);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}

		std::cout << "\n---------OUR TEAM--------\n" << std::endl;
		std::cout << barry << std::endl;
		std::cout << minnie << std::endl;

		std::cout << "\n-----------DAY 2---------\n" << std::endl;

		std::cout << "Barry gets promoted by 1 grade" << std::endl;
		try
		{
			barry.gradeUp();
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout << "\nMinnie gets promoted by 1 grade" << std::endl;
		try
		{
			minnie.gradeUp();
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << std::endl;
		}
		std::cout << "\n---------OUR TEAM--------\n" << std::endl;
		std::cout << barry << std::endl;
		std::cout << minnie << std::endl;

		std::cout << "\n-----------DAY 3---------\n" << std::endl;
		std::cout << "Barry fucked up and his boss wants to fire him" << std::endl;
		try
		{
			barry.gradeDown(1000);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << " He founds a way to hide from his boss and it worked!" << std::endl;
		}
		std::cout << "\nMinnie gets promoted by 100 grades what a queen!" << std::endl;
		try
		{
			minnie.gradeUp(100);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: " << e.what() << " It was too good to be true.." << std::endl;
		}
		std::cout << "\n---------OUR TEAM--------\n" << std::endl;
		std::cout << barry << std::endl;
		std::cout << minnie << std::endl;
		std::cout << "\n-----------END-----------\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
}
