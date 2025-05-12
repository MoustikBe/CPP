#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <ctime>

class Bureaucrat;

class AForm
{
private:
    const std::string   _Name;
    bool                _Signed;
    const int           _GradeToSign;
    const int           _GradeToExec;

public:
    AForm();
    AForm(std::string name, bool signStatus, int gradeToSign, int gradToExec);
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    ~AForm();
    std::string     GetName() const;
    bool            GetSign() const;
    int             GetGradeToSign() const;
    int             GetGradeToExec() const;
    void            beSigned(Bureaucrat& other);
    virtual void    execute(Bureaucrat const & executor) const = 0;
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw();
    };
    class FormNotSigned : public std::exception
    {
        public:
            const char *what() const throw();
    };
};
std::ostream& operator<<(std::ostream& os, const AForm &other);


#endif
