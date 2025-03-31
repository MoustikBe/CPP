/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:08:56 by misaac-c          #+#    #+#             */
/*   Updated: 2025/03/31 13:12:06 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/PhoneBook.hpp"

// -- Get_functions -- //
std::string Contact::Get_Name(void)
{
	return(m_name);
}
std::string Contact::Get_LastName(void)
{
	return(m_last_name);
}
std::string Contact::Get_Nickname(void)
{
	return(m_nickname);
}
std::string Contact::Get_PhoneNum(void)
{
	return(m_phone_number);
}
std::string Contact::Get_Secret(void)
{
	return(m_darkest_secret);
}

// -- Set_functions -- //
void Contact::Set_Name(std::string u_name)
{
	m_name = u_name;
}
void Contact::Set_LastName(std::string u_LastName)
{
	m_last_name = u_LastName;
}
void Contact::Set_Nickname(std::string u_nickname)
{
	m_nickname = u_nickname;
}
void Contact::Set_PhoneNum(std::string u_PhoneNum)
{
	m_phone_number = u_PhoneNum;
}
void Contact::Set_Secret(std::string u_secret)
{
	m_darkest_secret = u_secret;
}
