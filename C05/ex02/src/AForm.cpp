/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 13:29:25 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/12 11:59:48 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/AForm.hpp"
#include "../header/Bureaucrat.hpp"

AForm::AForm() : _Name("M42"), _Signed(false), _GradeToSign(150), _GradeToExec(150)
{
    std::cout << "Default constructor FORM called\n" ;
}

AForm::AForm(std::string name, bool signStatus, int gradeToSign, int gradToExec) : _Name(name), _Signed(signStatus), _GradeToSign(gradeToSign), _GradeToExec(gradToExec)
{
    if(_GradeToExec > 150  || _GradeToSign > 150)
        throw (GradeTooLowException());
    else if(_GradeToSign < 1 || _GradeToExec < 1)
        throw (GradeTooHighException());
    std::cout << "Constructor FORM called\n" ;
}

AForm::AForm(const AForm& other) : _Name(other._Name), _Signed(other._Signed), _GradeToSign(other._GradeToSign), _GradeToExec(other._GradeToExec)
{
    std::cout << "Copy constructor FORM called\n";
}

AForm& AForm::operator=(const AForm& other)
{
    if(this != &other)
        _Signed = other._Signed;
    std::cout << "Surcharge FORM of the operator =\n";
    return(*this);
}

AForm::~AForm()
{
    std::cout << "Destructor FORM called\n";
}

void AForm::beSigned(Bureaucrat& other)
{
    if(other.GetGrade() > _GradeToSign)
        throw (GradeTooLowException());
    std::cout << "Form signed\n";
    _Signed = true;
}

std::string AForm::GetName() const 
{
    return(_Name);
}

bool AForm::GetSign() const 
{
    return(_Signed);
}

int AForm::GetGradeToSign() const 
{
    return(_GradeToSign);
}

int AForm::GetGradeToExec() const 
{
    return(_GradeToExec);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return("Grade to high !\n");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return("Grade to low !\n");
}

const char* AForm::FormNotSigned::what() const throw()
{
    return("Form need to be sign first\n");
}

std::ostream& operator<<(std::ostream& os, const AForm& other)
{
	os << "Form : " << other.GetName() << "\nSigned ? : " << other.GetSign() << "\nGrade to sign : " << other.GetGradeToSign() << "\nGrade to exec : " << other.GetGradeToExec() << "\n";
	return(os);
}
