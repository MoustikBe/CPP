/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:05:27 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/29 12:56:09 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/DiamondTrap.hpp"

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
	
	std::cout << "# -- TESTING FRAG_TRAP -- #\n";
	FragTrap I;
	FragTrap J("BOT_J");
	FragTrap K;
	FragTrap L(J);
	std::cout << "~ - Object builted - ~\n";
	I.attack("a computer");
	J.attack("a keyboard");
	I.takeDamage(15);
	J.takeDamage(15);
	I.beRepaired(5);
	J.beRepaired(5);
	I.highFivesGuys();
	J.highFivesGuys();
	K = J;
	std::cout << "~ - All method tested - ~\n";

	std::cout << "# -- TESTING DIAMOND_TRAP -- #\n";
	DiamondTrap M;
	DiamondTrap N("BOT_N");
	DiamondTrap O;
	DiamondTrap P(N);
	std::cout << "~ - Object builted - ~\n";
	M.attack("a computer");
	N.attack("a keyboard");
	M.takeDamage(15);
	N.takeDamage(15);
	M.beRepaired(5);
	N.beRepaired(5);
	M.highFivesGuys();
	N.highFivesGuys();
	O = N;
	std::cout << "~ - All method tested - ~\n";
	return (0);
}
