/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:13:23 by misaac-c          #+#    #+#             */
/*   Updated: 2025/03/31 13:15:34 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/PhoneBook.hpp"

void Add_data(Contact &user, void (Contact::*setter)(std::string), std::string message)
{
	std::string data;
	
	while(data.length() == 0)
	{
		std :: cout << message;
		std::getline(std::cin, data);
	}
	(user.*setter)(data);
	return ;
}

void AddContact(Contact *user)
{
	std::cout << "\n-- Please fill the information of the new contact ! --\n";
	Add_data(*user, &Contact::Set_Name, "Name : ");
	Add_data(*user, &Contact::Set_LastName, "Last Name : ");
	Add_data(*user, &Contact::Set_Nickname, "Nickname : ");
	Add_data(*user, &Contact::Set_PhoneNum, "Phone number : ");
	Add_data(*user, &Contact::Set_Secret, "Darkest secret : ");
	std::cout << "-- Contact correctly added. --\n\n";
	return ;
}
