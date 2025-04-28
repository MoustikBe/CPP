#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP 
#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
private:
    bool _guarding;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();
    void attack();
    void guardGate();
};


#endif