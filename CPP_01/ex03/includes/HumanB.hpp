#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);

		void				attack(void) const;
		std::string	const	getName(void) const;
		Weapon const		getWeapon(void) const;
		void				setName(std::string newName);
		void				setWeapon(Weapon &newWeapon);
	private:
		std::string			_name;
		Weapon*				_weapon;
};


#endif
