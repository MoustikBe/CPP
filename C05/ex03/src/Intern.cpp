#include "../header/Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called\n";
}

Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return(*this);
}

Intern::~Intern()
{
    std::cout << "Intern destructor called\n";
}

static AForm* CreateShruberry(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

static AForm* CreateRobotomy(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

static AForm* CreatePresidential(const std::string& target)
{
    return new PresidentialPardonForm(target);
}


AForm* Intern::makeForm(const std::string FormName, const std::string target)
{

    const std::string FormOption[] = 
    {
        "Shruberry",
        "Robotomy",
        "Presidential"
    };
    AForm* (*functions[])(const std::string&) = 
    {
        CreateShruberry, 
        CreateRobotomy, 
        CreatePresidential
    };
    for(int i = 0; i < 3; i++)
    {
        if(FormName == FormOption[i])
            return(functions[i](target));
    }
    return (NULL); 
}