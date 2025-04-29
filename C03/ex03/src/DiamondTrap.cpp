/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:58:12 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/29 12:55:57 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("No_Name:/_clap_name")
{
    _Name = "No_Name:/";
    _HitPoints = FragTrap::_HitPoints;
    _Stamina = ScavTrap::_Stamina;
    _AttackDamage = FragTrap::_AttackDamage;
    std::cout << "Diamond trap named " << _Name << " builted (default constructor)\n";
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _Name(name)
{
    _HitPoints = FragTrap::_HitPoints;
    _Stamina = ScavTrap::_Stamina;
    _AttackDamage = FragTrap::_AttackDamage;
    std::cout << "Diamond trap named " << _Name << " builted\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond destructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _Name(other._Name)
{
    *this = other;
    std::cout << "Diamond copy constructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if(this != &other)
    {
        _Name = other._Name;
        ClapTrap::operator=(other);
    }
    std::cout << "Diamond trap " << _Name << " assigned\n";
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Clap trap name : " << ClapTrap::_Name << std::endl;
    std::cout << "Diamond trap name : " << this->_Name << std::endl;
    std::cout << "----- Addiotional data -----\n";
    std::cout << "HP : " << _HitPoints << std::endl;
    std::cout << "Stamina : " << _Stamina << std::endl;
    std::cout << "Attack damage : " << _AttackDamage << std::endl;
    std::cout << "------------\n";
    
}