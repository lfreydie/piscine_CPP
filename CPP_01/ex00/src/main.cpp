#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie1;
	Zombie	*zombie2;
	Zombie	zombie3;

	randomChump("Martin");
	zombie1 = newZombie("Lucas");
	zombie2 = newZombie("Etienne");
	zombie1->announce();
	zombie2->announce();
	randomChump("Louis");
	zombie3.announce();
	delete(zombie1);
	delete(zombie2);
	return (0);
}
