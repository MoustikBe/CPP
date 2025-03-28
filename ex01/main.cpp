/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:03:20 by misaac-c          #+#    #+#             */
/*   Updated: 2025/03/28 12:45:58 by misaac-c         ###   ########.fr       */
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
	std::cout << "\n-- Please fill the information of the new contact ! --\n";
	Add_data(*user, &Contact::Set_Name, "Name : ");
	Add_data(*user, &Contact::Set_LastName, "Last Name : ");
	Add_data(*user, &Contact::Set_Nickname, "Nickname : ");
	Add_data(*user, &Contact::Set_PhoneNum, "Phone number : ");
	Add_data(*user, &Contact::Set_Secret, "Darkest secret : ");
	std::cout << "-- Contact correctly added. --\n\n";
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
	int count = 0;
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
	id = stoi(str);
		FullDisplay(Book, id);
	return ;
}

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
