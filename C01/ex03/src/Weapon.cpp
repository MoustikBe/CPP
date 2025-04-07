/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:44:11 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/07 13:21:14 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

std::string& Weapon::getType()
{
	return(_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;	
}

/*
Implement a Weapon class that has:
• A private attribute type, which is a string.
• A getType() member function that returns a constant reference to type.
• A setType() member function that sets type using the new value passed as a parameter.
V */ 