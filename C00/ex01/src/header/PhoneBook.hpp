#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
#include <iostream>
#include <string.h>	
#include <stdio.h>
#include <aio.h>
#include <sstream>

class Contact
{
public:
	Contact(){}; 

private:
	std::string	m_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_darkest_secret;
	std::string	m_phone_number;

public:
	std::string Get_Name(void);
	std::string Get_LastName(void);
	std::string Get_Nickname(void);
	std::string Get_PhoneNum(void);
	std::string Get_Secret(void);
	void Set_Name(std::string u_name);
	void Set_LastName(std::string u_LastName);
	void Set_Nickname(std::string u_nickname);
	void Set_PhoneNum(std::string u_PhoneNum);
	void Set_Secret(std::string u_secret);
};

class PhoneBook
{
public:
	PhoneBook(){};
	
public: 
	Contact m_user[8];

};

// -- Functions -- //
// - ADD - //
void AddContact(Contact *user);
void Add_data(Contact &user, void (Contact::*setter)(std::string), std::string message);
// - SEARCH - //
void SearchContact(PhoneBook *Book);
void DisplayContact(PhoneBook *Book, int id);
void DisplayMaximum(std::string info);
void FullDisplay(PhoneBook *Book, int id);
// -- end_functions -- //

#endif