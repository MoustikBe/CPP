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
private:
	std::string _name;
};

// -- Functions -- // 
Zombie*	newZombie(std::string name);
void	randomChump( std::string name );

#endif