#include "../header/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), _target("DEFAULT")
{
    std::cout << "[Robotomy Pardon default constructor]\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : AForm("ShrubberyCreationForm", false, 145, 137), _target(Target)
{
    std::cout << "[Robotomy Pardon constructor]\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target)
{
    std::cout << "[Robotomy Pardon copy constructor]\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if(this != &other)
    {
        AForm::operator=(other);
        _target = other._target;
    }
    std::cout << "[Robotomy Pardon surcharger =]\n";
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "[Robotomy Pardon destructor]\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if(GetSign() == false)
        throw(AForm::FormNotSigned());
    else if(executor.GetGrade() > GetGradeToExec())
        throw(AForm::GradeTooLowException());
    std::ofstream f_out((_target + "_shrubbery").c_str());
    f_out  <<"    oxoxoo    ooxoo  \n";
    f_out  <<" ooxoxo oo  oxoxooo  \n";
    f_out  <<"oooo xxoxoo ooo ooox \n";
    f_out  <<"oxo o oxoxo  xoxxoxo \n";
    f_out  <<"  oxo xooxoooo o ooo \n";
    f_out  <<"    ooo\\oo\\  /o/o  \n";
    f_out  <<"        \\  \\/ /    \n";
    f_out  <<"         |   /       \n";
    f_out  <<"         |  |        \n";
    f_out  <<"         |  |        \n";
    f_out  <<"         |  |        \n";
    f_out  <<"         |  |        \n";
    f_out  <<"  ______/____\\____  \n";
    f_out.close();
}
