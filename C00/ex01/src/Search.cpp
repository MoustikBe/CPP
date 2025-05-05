/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:13:38 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/05 10:34:29 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/PhoneBook.hpp"

void DisplayMaximum(std::string info)
{
	int i = 0;

	std::cout << "|";
	while(info[i] && i < 9)
	{
		std::cout << info[i];
		i++;
	}
	if(info[i] && i <= 9)
		std::cout << ".";
	else if(!info[i] && i <= 9)
	{
		while (i++ <= 9)
			std::cout << " ";
	}
}

void DisplayContact(PhoneBook *Book, int id)
{
	std::cout << "|id     " << id << "  "; 
	DisplayMaximum(Book->m_user[id].Get_Name());
	DisplayMaximum(Book->m_user[id].Get_LastName());
	DisplayMaximum(Book->m_user[id].Get_Nickname());
	std::cout << "|\n";
}

void FullDisplay(PhoneBook *Book, int id)
{
	std::cout << "------------------------------------\n";
	std::cout << "Name : " << Book->m_user[id].Get_Name() << "\n";
	std::cout << "Last Name : " << Book->m_user[id].Get_LastName() << "\n";
	std::cout << "Nickname : " << Book->m_user[id].Get_Nickname() << "\n";
	std::cout << "Phone number : " << Book->m_user[id].Get_PhoneNum() << "\n";
	std::cout << "Darkest secret : " << Book->m_user[id].Get_Secret() << "\n";
	std::cout << "------------------------------------\n";
}

void SearchContact(PhoneBook *Book)
{
	int flag = 0;
	int id = 0;
	std::string str = "";

	std::cout << "--------------------------------------------\n";
	std::cout << "|id        |Name      |Last Name |Nick Name |" << "\n--------------------------------------------\n";
	while (id < 8)
	{
		if(Book->m_user[id].Get_Name() == "")
			flag++;
		else
			DisplayContact(Book, id);
		id++;
	}
	std::cout << "--------------------------------------------\n";
	int ref = 7 - flag;
	int maximum = ref + '0';
	if (maximum < '0')
	{
		std::cout << "The phone book is empty ! \n"; 
		return;
	}
	while (str == "" || str[0] < '0' || str[0] > maximum || str.size() > 1)
	{
		std::cout << "Select an ID : "; 
		std::getline(std::cin, str);
	}
	std::istringstream iss(str);
	iss >> id;
	FullDisplay(Book, id);
	return ;
}
