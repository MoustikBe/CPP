#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>


class Form
{
private:
    const std::string   _Name;
    bool                _Signed;
    const int           _GradeToSign;
    const int           _GradeToExec;

public:
    Form();
    Form::Form(std::string name, bool signStatus, int gradeToSign, int gradToExec);
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();
    void beSigned(Bureaucrat other);
};
std::ostream& operator<<(std::ostream& os, const Form &other);


#endif
