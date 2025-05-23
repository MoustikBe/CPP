/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:53:32 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/05 11:44:10 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error()
{
    std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*function[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for(int i = 0; i < 4; i++)
    {
        if(levels[i] == level)
            return((this->*function[i])());
    }
    std::cout << "Complain level not found\n";
}
