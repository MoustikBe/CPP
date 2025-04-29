#ifndef DIAMOND_TRAP 
# define DIAMOND_TRAP

#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string _Name;
public:
    DiamondTrap();
    DiamondTrap(const std::string& name);
    DiamondTrap(const DiamondTrap& other);
    DiamondTrap& operator=(const DiamondTrap& other);
    ~DiamondTrap();
    void attack(const std::string& target);
    void whoAmI();
};

#endif