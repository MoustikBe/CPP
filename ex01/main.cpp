/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:03:20 by misaac-c          #+#    #+#             */
/*   Updated: 2025/03/27 12:24:56 by misaac-c         ###   ########.fr       */
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
}

void Add_contact(Contact *user)
{

	Add_data(*user, &Contact::Set_Name, "Name : ");
	Add_data(*user, &Contact::Set_LastName, "Last Name : ");
	Add_data(*user, &Contact::Set_Nickname, "Nickname : ");
	Add_data(*user, &Contact::Set_PhoneNum, "Phone number : ");
	Add_data(*user, &Contact::Set_Secret, "Darkest secret : ");
	
	/* DONE 
	std :: cout << "Contact_name -> " << user.Get_Name() << "\n";
	std :: cout << "Contact_last_name -> " << user.Get_LastName() << "\n";
	std :: cout << "Contact_Nickname -> " << user.Get_Nickname() << "\n";
	std :: cout << "Contact_Phone_Num -> " << user.Get_PhoneNum() << "\n";
	std :: cout << "Contact_Secret -> " << user.Get_Secret() << "\n";
	*/
	return;	
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
		std::getline(std::cin, str);
		if(str == "ADD")
		{
			std :: cout << "[Adding contact scenario]\n";
			Add_contact(&Book.m_user[id]);
			id++;
		}
		else if(str == "SEARCH")
			std :: cout << "[Search contact scenario]\n";
	}
	std :: cout << "[Goodbye message]\n";	
	return(0);
}
