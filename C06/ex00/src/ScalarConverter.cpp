#include "../header/ScalarConverter.hpp"

ScalarConvert::ScalarConvert()
{
   //std::cout << "[ScalarConvert default constructor called]\n";
}
ScalarConvert::ScalarConvert(const ScalarConvert&)
{
    //std::cout << "[ScalarConvert copy constructor called]\n";
}
ScalarConvert& ScalarConvert::operator=(const ScalarConvert)
{
    //std::cout << "[ScalarConvert surcharger = called]\n";
    return(*this);
}
ScalarConvert::~ScalarConvert()
{
    //std::cout << "[ScalarConvert default destructor called]\n";
}

bool int_detector(std::string literal)
{
    for(int i=0; literal[i]; i++)
    {
        if(!isdigit(literal[i]))
        {
            if(i == 0 && (literal[i] == '+' || literal[i] == '-'));
            else
                return(false);
        }
    }
    return(true);
}

bool float_detector(std::string literal)
{
    int flag = 0;
    if(literal[literal.size() - 1] == 'f')
    {
        for(int i=0; literal[i + 1]; i++)
        {
            if(!isdigit(literal[i]))
            {
                if(literal[i] == '.' && flag == 0)
                    flag++;
                else 
                    return(false);
            }
        }
    }
    else
        return(false);
    return(true);
}

bool double_detector(std::string literal)
{
    int flag = 0;
    for(int i=0; literal[i + 1]; i++)
    {
        if(!isdigit(literal[i]))
        {
            if(literal[i] == '.' && flag == 0)
                flag++;
            else 
                return(false);
        }
    }
    return(true);
}

void ScalarConvert::convert(std::string literal)
{
    // -- Step 1, detection -- //
    std::cout << "size -> "  <<  literal.size() <<  "\n";
    if(literal.size() == 1 && !isdigit(literal[0]))
        std::cout << "Char detected\n";
    else if(int_detector(literal))
        std::cout << "Int detected\n";
    else if(float_detector(literal))
        std::cout << "Float detected\n";
    else if(double_detector(literal))
        std::cout << "Double detected\n";
    else
        std::cout << "Unknow type\n"; 
}