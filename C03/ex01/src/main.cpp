/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:05:27 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/30 10:53:36 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTrap.hpp"

int main()
{
	std::cout << "# -- TESTING CLAP_TRAP -- #\n";
	ClapTrap A;
	ClapTrap B("BOT_B");
	ClapTrap C;
	ClapTrap D(B);
	std::cout << "~ - Object builted - ~\n";
	A.attack("a computer");
	B.attack("a keyboard");
	A.takeDamage(15);
	B.takeDamage(15);
	A.beRepaired(5);
	B.beRepaired(5);
	C = B;
	std::cout << "~ - All method tested - ~\n";
	
	std::cout << "# -- TESTING SCAV_TRAP -- #\n";
	ScavTrap E;
	ScavTrap F("BOT_F");
	ScavTrap G;
	ScavTrap H(F);
	std::cout << "~ - Object builted - ~\n";
	E.attack("a computer");
	F.attack("a keyboard");
	E.takeDamage(15);
	F.takeDamage(15);
	E.beRepaired(5);
	F.beRepaired(5);
	E.guardGate();
	F.guardGate();
	G = F;
	std::cout << "~ - All method tested - ~\n";
	return (0);
}
