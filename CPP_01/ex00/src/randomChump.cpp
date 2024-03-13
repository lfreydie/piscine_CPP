#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie	r_dead(name);

	r_dead.announce();
	return ;
}
