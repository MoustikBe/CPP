/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:15:55 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/01 12:57:38 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie *Zomb;

	if(argc != 3)
	{
		std::cout << "Format expected -> ./Zombie [Nb_Zombie] [Name_Zombie]\n";
		return(1);
	}
	int i = atoi(argv[1]);
	Zomb = zombieHorde(i, (std::string)argv[2]);
	return(0);
}
