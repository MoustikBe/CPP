/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:03:20 by misaac-c          #+#    #+#             */
/*   Updated: 2025/03/26 13:53:46 by misaac-c         ###   ########.fr       */
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
	PhoneBook();
public: 
	//Contact[8];

};

/* Build des class */

void Add_data(Contact user, std::string data)
{
	user.Set_Name(data);
	std :: cout << "Object data -> " << user.Get_Name() << "\n";
}

void Add_contact()
{
	Contact user;
	std::string data;
	while (data.length() == 0)
	{
		std :: cout << "Name: ";
		std::getline(std::cin, data);
	}
	return;
	
	for(int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			std :: cout << "Name : ";
			std::getline(std::cin, data);
			Add_data(user, data);
		}
		else if (i == 1)
		{
			std :: cout << "Last Name : ";
			std::getline(std::cin, data);
			user.Set_LastName(data);
			std :: cout << "Object data -> " << user.Get_LastName() << "\n";
		}
		else if (i == 2)
		{
			std :: cout << "Nickname : ";
			std::getline(std::cin, data);
			user.Set_Nickname(data);
			std :: cout << "Object data -> " << user.Get_Nickname() << "\n";
		}
		else if (i == 3)
		{
			std :: cout << "Phone num : ";
			std::getline(std::cin, data);
			user.Set_PhoneNum(data);
			std :: cout << "Object data -> " << user.Get_PhoneNum() << "\n";
		}
		else if (i == 4)
		{
			std :: cout << "Darkest secret : ";
			std::getline(std::cin, data);
			user.Set_Secret(data);
			std :: cout << "Object data -> " << user.Get_Secret() << "\n";
		}
	}
	
}

int main(void)
{
	std::string str;
	std :: cout << "[Welcome message]\n";
	while(str != "EXIT")
	{
		std::getline(std::cin, str);
		if(str == "ADD")
		{
			std :: cout << "[Adding contact scenario]\n";
			Add_contact();
		}
		else if(str == "SEARCH")
			std :: cout << "[Search contact scenario]\n";
	}
	std :: cout << "[Goodbye message]\n";	
	return(0);
}
