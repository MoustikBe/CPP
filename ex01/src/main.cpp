/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:03:20 by misaac-c          #+#    #+#             */
/*   Updated: 2025/03/31 13:17:52 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/PhoneBook.hpp"

int main(void)
{
	PhoneBook Book;
	int id = 0;

	std::string str;
	std :: cout << "Welcome to this awesome phone book !\nADD -> use that command to add a contact in the phone book.\nSEARCH -> use that command to see all the contact register in this phone book.\nEXIT -> leave the program.\n[DISCLAIMER] : When the program stop the phone book loose all his data.\n\n";
	while(str != "EXIT")
	{
		if (id >= 8)
		{
			std::cout << "A maximum of 8 contact are accepted.\nStarting from now, a new user will delete the data of the previous ones.\n";
			id = 0;
		}
		std::cout << "EXIT, ADD and SEARCH commands only accepted : ";
		std::getline(std::cin, str);
		if(str == "ADD")
		{
			AddContact(&Book.m_user[id]);
			id++;
		}
		else if(str == "SEARCH")
			SearchContact(&Book);
	}
	std :: cout << "\nAll the data has been deleted :/\nThank you for using this phone book !\n";	
	return(0);
}
