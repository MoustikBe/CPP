/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:05:27 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/28 12:31:00 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("bot_B");
	std::cout << "------------\n";
	a.attack("a tree");
	b.attack("a rock");
	a.beRepaired(5);
	b.beRepaired(10);
	a.takeDamage(10);
	b.takeDamage(15);
	std::cout << "------------\n";
	
	ScavTrap c;
	ScavTrap d("bot_D");
	std::cout << "------------\n";
	c.attack("a wall");
	d.attack("a glass");
	c.beRepaired(1);
	d.beRepaired(2);
	c.takeDamage(1);
	d.takeDamage(2);
	std::cout << "------------\n";
	return (0);
}
