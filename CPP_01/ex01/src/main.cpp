#include "Zombie.hpp"

int	main(int ac, char **av)
{
	try
	{
		Zombie	*horde;
		int		n;

		if (ac != 3 || std::strlen(av[1]) == 0 || std::strlen(av[2]) == 0 )
		{
			std::cout << "If you want an army, you must ask for it" << std::endl;
			return (-1);
		}
		else
		{
			n = std::atoi(av[1]);
			if (n <= 0)
			{
				std::cout << "If you want an army, you must ask for at least one soldier" << std::endl;
				return (-1);
			}
			horde = zombieHorde(n, av[2]);
			for(int i = 0; i < n; i++)
				horde[i].announce();
			delete[] horde;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << '\n';
	}

	return (0);
}
