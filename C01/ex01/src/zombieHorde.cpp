/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 12:36:51 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/01 13:01:19 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	// 1) Creer tous les zombie et les renvois dans un pointeur de la class dans le main
	Zombie *Zomb = new Zombie[N];
	for(int i=0; i<=N; i++)
		Zomb[i].SetName(name); 
	// Alloue la memoire et leurs donnes leurs nom.
	return(Zomb);
}
