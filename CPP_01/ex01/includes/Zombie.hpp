
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <cstring>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void		announce(void) const;
		void		set_name(std::string name);
	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
