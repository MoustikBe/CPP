#include "../header/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(), _target("DEFAULT")
{
    std::srand(std::time(NULL));
    std::cout << "[Robotomy default constructor]\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm("RobotomyRequestForm", false, 72, 45), _target(Target)
{
    std::srand(std::time(NULL));
    std::cout << "[Robotomy constructor]\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other), _target(other._target)
{
    std::cout << "[Robotomy copy constructor]\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if(this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    std::cout << "[Robotomy surcharger =]\n";
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "[Robotomy destructor]\n";
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if(GetSign() == false)
        throw(AForm::FormNotSigned());
    else if(executor.GetGrade() > GetGradeToExec())
        throw(AForm::GradeTooLowException());
    std::cout << "Biiiip bip biip, ";
    if (std::rand() % 2 == 0)
        std::cout << "[" << _target << "] has been robotomized\n";
    else
        std::cout << "robotomy failed :/.\n"; 
}