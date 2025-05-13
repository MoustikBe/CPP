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


void ScalarConvert::convert(std::string literal)
{
    // -- Step 1, detection -- //
    std::cout << "size -> "  <<  literal.size() <<  "\n";

}