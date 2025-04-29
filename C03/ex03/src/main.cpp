/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:05:27 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/29 11:58:20 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ClapTrap.hpp"

int main()
{/*
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

	FragTrap e;
	FragTrap f("bot_F");
	std::cout << "------------\n";
	e.attack("a paper");
	f.attack("a truck");
	e.beRepaired(1);
	f.beRepaired(2);
	e.takeDamage(1);
	f.takeDamage(2);
	std::cout << "------------\n";
	*/
	DiamondTrap g;
	DiamondTrap h("bot_H");
	std::cout << "------------\n";
	g.attack("a keyboard");
	h.attack("a mouse");
	h.beRepaired(2);
	h.takeDamage(2);
	h.whoAmI();
	g.whoAmI();
	std::cout << "------------\n";
	return (0);
}
