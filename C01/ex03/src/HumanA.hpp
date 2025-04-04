#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon def_weapon){};
	void attack();
private:
	Weapon		_weapon;
	std::string	_name;
};

#endif