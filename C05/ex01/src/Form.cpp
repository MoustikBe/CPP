/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:29:25 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/06 14:25:27 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Form.hpp"
#include "../header/Bureaucrat.hpp"

Form::Form() : _Name("M42"), _Signed(false), _GradeToSign(150), _GradeToExec(150)
{
    std::cout << "Default constructor called\n" ;
}

Form::Form(std::string name, bool signStatus, int gradeToSign, int gradToExec) : _Name(name), _Signed(signStatus), _GradeToSign(gradeToSign), _GradeToExec(_GradeToExec)
{
    std::cout << "Constructor called\n" ;
}

Form::Form(const Form& other) : _Name(other._Name), _Signed(other._Signed), _GradeToSign(other._GradeToSign), _GradeToExec(other._GradeToExec)
{
    std::cout << "Copy constructor called\n";
}

Form& Form::operator=(const Form& other)
{
    if(this != &other)
        _Signed = other._Signed;
    std::cout << "Surcharge of the operator =\n";
}

Form::~Form()
{
    std::cout << "Destructor called\n";
}

void Form::beSigned(Bureaucrat other)
{
    if(other.GetGrade() < _GradeToSign)
        throw (GradeTooLowException());
    _Signed = true;
}
