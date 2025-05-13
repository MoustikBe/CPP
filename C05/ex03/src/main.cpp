/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:19:27 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/13 11:02:05 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"
#include "../header/AForm.hpp"
#include "../header/ShrubberyCreationForm.hpp"
#include "../header/RobotomyRequestForm.hpp"
#include "../header/PresidentialPardonForm.hpp"
#include "../header/Intern.hpp"

int main(void)
{
    // -- All is working scenario -- //
    try
    {
        Bureaucrat Carlo("Carlo", 1);
        ShrubberyCreationForm   Form1("Not_a_tree");
        RobotomyRequestForm     Form2("Not_a_Robot");
        PresidentialPardonForm  Form3("Not_Zaphod");
        std::cout << "\e[1;34mCONSTRUCTOR BUILTED, testing them.....\n\n";
        Carlo.signForm(Form1);
        Carlo.executeForm(Form1);
        std::cout << "\n";
        Carlo.signForm(Form2);
        Carlo.executeForm(Form2);
        std::cout << "\n";
        Carlo.signForm(Form3);
        Carlo.executeForm(Form3);
        std::cout << "\nEND OF THE  TEST, destroying the objects.....\e[0m\n";
    }
    catch (const std::exception &e)
    {
        std::cout << "ERROR\n";
    }
    std::cout << "\n\n";
    // -- GradeToLow scenario -- //
    try
    {
        Bureaucrat Carlo("Carlo", 60);
        ShrubberyCreationForm   Form1("Not_a_tree");
        RobotomyRequestForm     Form2("Not_a_Robot");
        PresidentialPardonForm  Form3("Not_Zaphod");
        std::cout << "\e[1;34mCONSTRUCTOR BUILTED, testing them.....\n\n";
        Carlo.signForm(Form1);
        Carlo.executeForm(Form1);
        std::cout << "\n";
        Carlo.signForm(Form2);
        Carlo.executeForm(Form2);
        std::cout << "\n";
        Carlo.signForm(Form3);
        Carlo.executeForm(Form3);
        std::cout << "\nEND OF THE  TEST, destroying the objects.....\e[0m\n";
    }
    catch (const AForm::FormNotSigned &e)
    {
        std::cout << "Form not Signed !\n";
    }
    catch (const AForm::GradeTooHighException &e)
    {
        std::cout << "Grade is too high !\n";
    }
    catch (const AForm::GradeTooLowException &e)
    {
        std::cout << "Grade is too low !\n";
    }
    std::cout << "\n\n";
    // -- Intern test -- // 
    try
    {
        Bureaucrat Carlo("Carlo", 2);
        Intern Achar;
        AForm *TestForm = Achar.makeForm("Presidential", "mundo");
        std::cout << "\e[1;34mCONSTRUCTOR BUILTED, testing them.....\n\n";
        TestForm->beSigned(Carlo);
        TestForm->execute(Carlo);
        std::cout << "\nEND OF THE  TEST, destroying the objects.....\e[0m\n";
    }
    catch (const AForm::FormNotSigned &e)
    {
        std::cout << "Form not Signed !\n";
    }
    catch (const AForm::GradeTooHighException &e)
    {
        std::cout << "Grade is too high !\n";
    }
    catch (const AForm::GradeTooLowException &e)
    {
        std::cout << "Grade is too low !\n";
    }
    return(0);
}