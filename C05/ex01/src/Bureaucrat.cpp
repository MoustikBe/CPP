/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:31:08 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/12 10:39:21 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Bureaucrat.hpp"
#include "../header/Form.hpp"

Bureaucrat::Bureaucrat() : _Name("Bureaucrate"), _Grade(1)
{
    std::cout << " ---------------------------- \n";
    std::cout << "Default constructor called\nName -> " << _Name << "\nGrade -> " << _Grade << "\n";
    std::cout << " ---------------------------- \n";
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) : _Name(Name)
{
    if(Grade > 150)
        throw GradeTooLowException();
    else if(Grade < 1)
        throw GradeTooHighException();
    else
        _Grade = Grade;
    std::cout << " ---------------------------- \n";
    std::cout << "Constructor called\nName -> " << _Name << "\nGrade -> " << _Grade << "\n";
    std::cout << " ---------------------------- \n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _Name(other._Name), _Grade(other._Grade)
{
    std::cout << " ---------------------------- \n";
    std::cout << "Copy constructor called\nName -> " << _Name << "\nGrade -> " << _Grade << "\n";
    std::cout << " ---------------------------- \n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other)
        _Grade = other._Grade;
    std::cout << "Surcharger of = called\n";
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destuctor called\n";
}

int Bureaucrat::GetGrade() const
{
    return(_Grade);
}

std::string  Bureaucrat::GetName() const
{
    return(_Name);
}

void   Bureaucrat::IncreaseGrade()
{
    if(_Grade <= 1)
        throw(GradeTooHighException());
    _Grade--;
    std::cout << "Promoted\n";
}

void   Bureaucrat::DecreaseGrade()
{
    if(_Grade >= 150)
        throw(GradeTooLowException());
    _Grade++;
    std::cout << "Sacked\n";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade to high !\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade to low !\n");
}

void Bureaucrat::signForm(Form &paper)
{
    try
    {
        paper.beSigned(*this); 
        std::cout << _Name <<  " signed " << paper.GetName();
    }
    catch (const std::exception &e) // Peut aussi être const Form::GradeTooLowException &e //
    {
        std::cout << "Form not signed\n";
        std::cout << _Name <<  " couldn't signed " << paper.GetName() << " because the grade is too low\n";
    } 
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other)
{
	std::cout << other.GetName() << ", bureaucrat grade " << other.GetGrade() << "\n";
	return(os);
}
