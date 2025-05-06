#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    std::string _Name;
    int               _Grade;
public:
    Bureaucrat(std::string Name, int Grade);
    ~Bureaucrat();
    std::string GetName();
    int         GetGrade();
    void        InreaseGrade();
    void        DecreaseGrade();
};


#endif 