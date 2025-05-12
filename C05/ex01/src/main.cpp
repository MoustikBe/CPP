/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:19:27 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/12 10:32:39 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"
#include "../header/Form.hpp"

int main(void)
{
    /* TEST, all good */
    /*
    try
    {
        Bureaucrat Marc("Marc", 5);
        Marc.IncreaseGrade();
        std::cout << Marc;
    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cout << "Error caught : " << e.what();
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cout << "Error caught : " << e.what();
    }
    */
    /* TEST, too low */
    /*
    try
    {
        Bureaucrat Patrick("Patrick", 150);
        Patrick.DecreaseGrade();
        std::cout << Patrick;
    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cout << "Error caught : " << e.what();
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cout << "Error caught : " << e.what();
    }
    */
    /* TEST, too high */
    /*
    try
    {
        Bureaucrat Bob("Bob", 1);
        Bob.IncreaseGrade();
        std::cout << Bob;
    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cout << "Error caught : " << e.what();
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cout << "Error caught : " << e.what();
    }
    */
    try
    {
        Form Paper("42", false, 15, 15);
        Bureaucrat Carlo("Carlo", 100);
        Carlo.signForm(Paper);
        std::cout << Carlo;
    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cout << "Error caught : " << e.what();
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {   
        std::cout << "Error caught : " << e.what();
    }
    return(0);
}