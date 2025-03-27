/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:03:20 by misaac-c          #+#    #+#             */
/*   Updated: 2025/03/27 13:44:28 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>	
#include <stdio.h> // get_line 
#include <aio.h> // size_t

/* Build des class */

class Contact
{
public:
	// Constructor //
	Contact(){}; 

private:
	std::string	m_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_darkest_secret;
	std::string	m_phone_number;

public:
	// Get_function //
	std::string Get_Name(void)
	{
		return(m_name);
	}
	std::string Get_LastName(void)
	{
		return(m_last_name);
	}
	std::string Get_Nickname(void)
	{
		return(m_nickname);
	}
	std::string Get_PhoneNum(void)
	{
		return(m_phone_number);
	}
	std::string Get_Secret(void)
	{
		return(m_darkest_secret);
	}
	// Set_function //
	void Set_Name(std::string u_name)
	{
		m_name = u_name;
	}
	void Set_LastName(std::string u_LastName)
	{
		m_last_name = u_LastName;
	}
	void Set_Nickname(std::string u_nickname)
	{
		m_nickname = u_nickname;
	}
	void Set_PhoneNum(std::string u_PhoneNum)
	{
		m_phone_number = u_PhoneNum;
	}
	void Set_Secret(std::string u_secret)
	{
		m_darkest_secret = u_secret;
	}
	
};


class PhoneBook
{
public:
	PhoneBook(){};
	
public: 
	Contact m_user[8];

};

/* Build des class */

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

	Add_data(*user, &Contact::Set_Name, "Name : ");
	Add_data(*user, &Contact::Set_LastName, "Last Name : ");
	Add_data(*user, &Contact::Set_Nickname, "Nickname : ");
	Add_data(*user, &Contact::Set_PhoneNum, "Phone number : ");
	Add_data(*user, &Contact::Set_Secret, "Darkest secret : ");
	return ;
}

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
	std::cout << "|id        ";
	DisplayMaximum(Book->m_user[id].Get_Name());
	DisplayMaximum(Book->m_user[id].Get_LastName());
	DisplayMaximum(Book->m_user[id].Get_Nickname());
	std::cout << "|\n";
}

void SearchContact(PhoneBook *Book)
{
	int id = 0;
	int count = 0;

	std::cout << "--------------------------------------------\n";
	std::cout << "|id       | Name     |Last Name |Nick Name |" << "\n--------------------------------------------\n";
	while (id < 7)
	{
		if(Book->m_user[id].Get_Name() == "");
		else
		{
			DisplayContact(Book, id);
			
		}
		id++;
	}
	std :: cout << "--------------------------------------------\n";
	return ;
}

int main(void)
{
	// Theorie, les  id vont de 0 a 7 pour un total de 8 objet user stocker dans book. 
	// Faire Book.m_user[id] -> id n'est incrementer que dans le cas ou l'on add.
	// Donner Book.m_user[id] en parametre pour changer les donnes de cette objet. 
	PhoneBook Book;
	int id = 0;

	std::string str;
	std :: cout << "[Welcome message]\n";
	while(str != "EXIT")
	{
		if (id >= 8)
			id = 0;
		std::getline(std::cin, str);
		if(str == "ADD")
		{
			std :: cout << "[Adding contact scenario]\n";
			AddContact(&Book.m_user[id]);
			id++;
		}
		else if(str == "SEARCH")
		{
			std :: cout << "[Search contact scenario]\n";
			SearchContact(&Book);
		}
	}
	std :: cout << "[Goodbye message]\n";	
	return(0);
}
