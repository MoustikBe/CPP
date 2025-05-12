/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:19:27 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/12 13:18:02 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"
#include "../header/AForm.hpp"
#include "../header/ShrubberyCreationForm.hpp"
#include "../header/RobotomyRequestForm.hpp"
#include "../header/PresidentialPardonForm.hpp"


int main(void)
{
    try
    {
        Bureaucrat Carlo("Carlo", 1);
        PresidentialPardonForm hola("Home");
        Carlo.signForm(hola);
        Carlo.executeForm(hola);
    }
    catch (const std::exception &e)
    {
        std::cout << "ERROR\n";
    }
    return(0);
}