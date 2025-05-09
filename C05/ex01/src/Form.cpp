/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:29:25 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/09 11:49:44 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Form.hpp"
#include "../header/Bureaucrat.hpp"

Form::Form() : _Name("M42"), _Signed(false), _GradeToSign(150), _GradeToExec(150)
{
    std::cout << "Default constructor FORM called\n" ;
}

Form::Form(std::string name, bool signStatus, int gradeToSign, int gradToExec) : _Name(name), _Signed(signStatus), _GradeToSign(gradeToSign), _GradeToExec(gradToExec)
{
    if(_GradeToExec > 150  || _GradeToSign > 150)
        throw (GradeTooLowException());
    else if(_GradeToSign < 1 || _GradeToExec < 1)
        throw (GradeTooHighException());
    std::cout << "Constructor FORM called\n" ;
}

Form::Form(const Form& other) : _Name(other._Name), _Signed(other._Signed), _GradeToSign(other._GradeToSign), _GradeToExec(other._GradeToExec)
{
    std::cout << "Copy constructor FORM called\n";
}

Form& Form::operator=(const Form& other)
{
    if(this != &other)
        _Signed = other._Signed;
    std::cout << "Surcharge FORM of the operator =\n";
    return(*this);
}

Form::~Form()
{
    std::cout << "Destructor FORM called\n";
}

void Form::beSigned(Bureaucrat& other)
{
    if(other.GetGrade() > _GradeToSign)
        throw (GradeTooLowException());
    std::cout << "Form signed\n";
    _Signed = true;
}

std::string Form::GetName() const 
{
    return(_Name);
}

bool Form::GetSign() const 
{
    return(_Signed);
}

int Form::GetGradeToSign() const 
{
    return(_GradeToSign);
}

int Form::GetGradeToExec() const 
{
    return(_GradeToExec);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return("Grade to high !\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return("Grade to low !\n");
}

std::ostream& operator<<(std::ostream& os, const Form& other)
{
	os << "Form : " << other.GetName() << "\nSigned ? : " << other.GetSign() << "\nGrade to sign : " << other.GetGradeToSign() << "\nGrade to exec : " << other.GetGradeToExec() << "\n";
	return(os);
}
