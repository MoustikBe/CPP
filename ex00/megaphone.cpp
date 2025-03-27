/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:27:27 by misaac-c          #+#    #+#             */
/*   Updated: 2025/01/31 13:42:26 by misaac-c         ###   ########.fr       */
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
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i++;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '"')
				j++;
			else if (argv[i][j] > 96 && argv[i][j] < 123)
			{
				new_char = argv[i][j] - 32;
				std :: cout << new_char;
				j++;
			}
			else
				std :: cout << argv[i][j++];
		}
		i++;
	}
	std :: cout << '\n';
	return(0);
}
