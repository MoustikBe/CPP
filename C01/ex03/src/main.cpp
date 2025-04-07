/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:50:04 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/07 13:28:38 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("guns");
		bob.attack();
	}
	{
		Weapon club = Weapon("apples");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("swords");
		jim.attack();
	}
	return (0);
}
