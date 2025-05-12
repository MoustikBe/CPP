#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    const std::string _Name;
    int               _Grade;
public:
    Bureaucrat();
    Bureaucrat(std::string Name, int Grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();
    std::string GetName() const;
    int         GetGrade() const;
    void        IncreaseGrade();
    void        DecreaseGrade();
    void        signForm(AForm &paper);
    void        executeForm(AForm const & form) const;
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
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat &other);


#endif 