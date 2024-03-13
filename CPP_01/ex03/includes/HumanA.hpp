#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(Weapon &newWeapon);
		HumanA(std::string name, Weapon &newWeapon);
		~HumanA(void);

		void				attack(void) const;
		std::string	const	getName(void) const;
		Weapon const		getWeapon(void) const;
		void				setName(std::string newName);
		void				setWeapon(Weapon newWeapon);
	private:
		std::string			_name;
		Weapon&				_weapon;
};

#endif
