/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:18:03 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/07 13:19:45 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name):_name(name), _weapon(NULL)
{
}

void    HumanB::attack()
{
	std::cout << _name << " attacks with their "<< _weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon &Weap)
{
	_weapon = &Weap;
}
