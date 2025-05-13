#include "../header/ScalarConverter.hpp"


int main(int argc, char **argv)
{
    
    if(argc != 2)
    {
        std::cout << ":/ only 2 arguments are accepted by the program\n";
        return(1);
    }
    std::string literal = argv[1];
    ScalarConvert::convert(literal); 
    return(0);
}