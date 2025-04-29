/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:19:20 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/29 12:06:25 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

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

ClapTrap::ClapTrap(const ClapTrap &other) : 
_Name(other._Name), _HitPoints(other._HitPoints), _Stamina(other._Stamina), _AttackDamage(other._AttackDamage)
{
    std::cout << "Clap Trap obecjt " << _Name << " copied\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if(this != &other)
    {
        _Name = other._Name;
        _HitPoints = other._HitPoints;
        _Stamina = other._Stamina;
        _AttackDamage = other._AttackDamage;
    }
    std::cout << "Clap trap assigned\n";
    return(*this);
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
    _Stamina = _Stamina - 1;
    _HitPoints = _HitPoints + amount;
    std::cout << "ClapTrap " << _Name <<  " repaired himself of " << amount << " point(s)\n";
}
