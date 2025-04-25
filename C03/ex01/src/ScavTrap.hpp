#ifndef SCAV_TRAP_HPP
#define  SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public: 
    ScavTrap(std::string name) : ClapTrap(name){
        std::cout << "Constructor of ScavTrap called\n";
    };
    ~ScavTrap(){
        std::cout << "Destrcutor of ScavTrap called\n";
    };
    void guardGate();
};

#endif