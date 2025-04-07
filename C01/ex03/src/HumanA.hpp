#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &def_weapon) : _name(name), _weapon(def_weapon){}
	void attack();
private:
	std::string	_name;
	Weapon		&_weapon;
};

#endif