#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

#include <iostream>

class Weapon
{
public:
	Weapon(){};
	Weapon(std::string type);
private:
	std::string _type;
public:
	std::string	&getType();
	void		setType(std::string type);
};

#endif