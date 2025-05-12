#include "../header/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(), _target("DEFAULT")
{
    std::cout << "[Robotomy Pardon default constructor]\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm("RobotomyRequestForm", false, 72, 45), _target(Target)
{
    std::cout << "[Robotomy Pardon constructor]\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target)
{
    std::cout << "[Robotomy Pardon copy constructor]\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if(this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    std::cout << "[Robotomy Pardon surcharger =]\n";
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "[Robotomy Pardon destructor]\n";
}