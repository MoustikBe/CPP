#ifndef INTERN_HPP
# define INTERN_HPP
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &other);
    Intern& operator=(const Intern &other);
    ~Intern();
    AForm* makeForm(const std::string FormName,const std::string FormTarget);
};
#endif