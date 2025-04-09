/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:49:29 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/09 13:03:48 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int find_val(std::string str)
{
	if(str == "DEBUG")
		return(1);
	else if(str == "INFO")
		return(2);
	else if(str == "WARNING")
		return(3);
	else if(str == "ERROR")
		return(4);
	return(5);
}


int main(int argc, char **argv)
{
	if(argc != 2)
		return(1);
	Harl	angry_client;
	int token = find_val(argv[1]);

	switch (token)
	{
		case 1:
			angry_client.complain("DEBUG");
		case 2:
			angry_client.complain("INFO");
		case 3:
			angry_client.complain("WARNING");
		case 4:
			angry_client.complain("ERROR");
			break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}	
	return(0);
}
