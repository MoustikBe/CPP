/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:19:20 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/25 12:53:49 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _Name = "No_name_:/";
    _HitPoints = 10;
    _Stamina = 10;
    _AttackDamage = 0;
    std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
    _Name = name;
    _HitPoints = 10;
    _Stamina = 10;
    _AttackDamage = 0;
    std::cout << "Clap trap named " << _Name << " builted\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
    if(_HitPoints <= 0)
    {
        std::cout << "No HP anymore\n";
        return ;
    }
    else if(_Stamina <= 0)
    {
        std::cout << "No stamina anymore\n";
        return ;
    }
    _Stamina = _Stamina - 1;
    std::cout << "ClapTrap " << _Name << " attacks " << target 
              << ", causing " << _AttackDamage << " points of damage!\n";
 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(_HitPoints <= 0)
    {
        std::cout << "No HP anymore\n";
        return ;
    }
    else if(_Stamina <= 0)
    {
        std::cout << "No stamina anymore\n";
        return ;
    }
    _HitPoints = _HitPoints - amount;
    std::cout << "ClapTrap " << _Name << " takes " << amount << " damage, HP reamaning " << _HitPoints << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{

    if(_HitPoints <= 0)
    {
        std::cout << "No HP anymore\n";
        return ;
    }
    else if(_Stamina <= 0)
    {
        std::cout << "No stamina anymore\n";
        return ;
    }
    else if((_HitPoints + amount) > 10)
    {
        std::cout << "ClapTrap can't have more then 10 HP\n";
        return ;
    }
    _Stamina = _Stamina - 1;
    _HitPoints = _HitPoints + amount;
    std::cout << "ClapTrap " << _Name <<  " repaired himself of " << amount << "point(s)\n";
}
