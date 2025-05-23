/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:01:43 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/29 12:56:03 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _HitPoints = 100;
    _Stamina = 100;
    _AttackDamage = 30; 
    std::cout << "Frag trap named " << _Name << " builted (default constructor)\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _HitPoints = 100;
    _Stamina = 100;
    _AttackDamage = 30;
    std::cout << "Frag trap " << _Name << " builted\n";
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "Frag trap " << _Name << " copied\n";
}

FragTrap::~FragTrap()
{
    std::cout << "Frag trap " << _Name << " has been destroyed\n";
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    ClapTrap::operator=(other);
    std::cout << "Frag trap " << _Name << " assigned\n";
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Frag trap " << _Name << " : Give me high-fives ! :)\n";
}
