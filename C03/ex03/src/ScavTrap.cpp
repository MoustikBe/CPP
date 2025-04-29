/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:01:47 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/29 11:58:24 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _HitPoints = 100;
    _Stamina = 50;
    if(_AttackDamage != 30)
        _AttackDamage = 20;
    std::cout << "Scav trap named " << _Name << " builted (default constructor)\n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _HitPoints = 100;
    _Stamina = 50;
    if(_AttackDamage != 30)
        _AttackDamage = 20;
    std::cout << "Scav trap named " << _Name << " builted\n";
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "Scav trap " << _Name << " copied\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "Scav trap " << _Name << " assigned\n";
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _Name << " destroyed\n";
}

void ScavTrap::attack(const std::string& target)
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

void ScavTrap::guardGate()
{
    std::cout << "Scav trap " << _Name << " is now in gate, keeper mode\n";
}
