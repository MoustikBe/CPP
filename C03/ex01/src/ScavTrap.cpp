

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
    _Name = "NoName";
    _HitPoints = 100;
    _Stamina = 50;
    _AttackDamage = 20;
    std::cout << "Scav trap named " << _Name << " has been created\n";
}

ScavTrap::ScavTrap(std::string name) 
{
    _Name = name;
    _HitPoints = 100;
    _Stamina = 50;
    _AttackDamage = 20;
    std::cout << "Scav trap named " << _Name << " has been created\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    this->_guarding = other._guarding;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    ClapTrap::operator=(other);
    if(this != &other)
        _guarding = other._guarding;
    std::cout << "Scav trap " << _Name << " assigned\n";
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _Name << " destroyed\n";
}
