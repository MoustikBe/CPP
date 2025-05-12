/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:19:27 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/12 12:36:27 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"
#include "../header/AForm.hpp"
#include "../header/ShrubberyCreationForm.hpp"


int main(void)
{
    try
    {
        Bureaucrat Carlo("Carlo", 24);
        ShrubberyCreationForm hola("test");
        hola.beSigned(Carlo);
        hola.execute(Carlo);
    }
    catch (const std::exception &e)
    {
        std::cout << "ERROR\n";
    }
    return(0);
}