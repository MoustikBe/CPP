#include "../header/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(), _target("DEFAULT")
{
    std::cout << "[Presidential Pardon default constructor]\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : AForm("PresidentialPardonForm", false, 25, 5), _target(Target)
{
    std::cout << "[Presidential Pardon constructor]\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), _target(other._target)
{
    std::cout << "[Presidential Pardon copy constructor]\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    if(this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    std::cout << "[Presidential Pardon surcharger =]\n";
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "[Presidential Pardon destructor]\n";
}

void    PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if(GetSign() == false)
        throw(AForm::FormNotSigned());
    else if(executor.GetGrade() > GetGradeToExec())
        throw(AForm::GradeTooLowException());
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}