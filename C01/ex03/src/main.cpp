/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:50:04 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/07 11:06:00 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	Weapon club = Weapon("apples");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("guns");
	bob.attack();
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	club.setType("swords");
	jim.attack();
	
	return (0);
}
