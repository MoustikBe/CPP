/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:15:55 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/03 12:53:50 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

int main(int argc, char **argv)
{
	int i;
	Zombie *Zomb;

	if(argc != 3)
	{
		std::cout << "Format expected -> ./Zombie [Nb_Zombie] [Name_Zombie]\n";
		return(1);
	}
	i = atoi(argv[1]);
	if (i == 0)
	{
		std::cout << "Invalid format for the [Nb_zombie]\n";
		return(1);
	} 
	Zomb = zombieHorde(i, (std::string)argv[2]);
	for(int j = 0; j < i; j++)
		Zomb[j].announce();
	delete[] Zomb;
	return(0);
}
