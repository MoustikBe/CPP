#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <aio.h>

class ClapTrap
{
protected:
    std::string _Name;
    int      _HitPoints;
    int      _Stamina;
    int      _AttackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
};

#endif