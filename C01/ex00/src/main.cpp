/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 10:15:55 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/01 12:27:08 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Zombie.hpp"

int main(void)
{
	Zombie Alpha;
	Zombie *Beta;
	std::string name = "Hello";
	
	for(int i=0; i < 10; i++)
	{ 
		name += "0";
		Beta = newZombie(name);
		Beta->announce();
		delete Beta;
	}
	randomChump("LaVille");
	return(0);
}
