/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:27:27 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/01 09:38:39 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	char new_char;
 
	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(i=1; i < argc; i++)
		{
			std::string arg = argv[i];
			for(char &c : arg)
				std::cout << (char)std::toupper(c);
		}
	}
	std::cout << '\n';
	return(0);
}
