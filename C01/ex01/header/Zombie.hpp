#ifndef _ZOMBIE_
# define _ZOMBIE_

// -- Library -- //
#include <iostream>

// -- Class -- // 
class Zombie
{
public:	
	Zombie(){};
	Zombie(std::string name):_name(name){}
	~Zombie(){std::cout << _name << ": Destroyed\n";};
	void announce( void );
	void SetName(std::string name)
	{
		_name = name;
	}
private:
	std::string _name;
};

// -- Functions -- // 
Zombie* zombieHorde( int N, std::string name );

#endif