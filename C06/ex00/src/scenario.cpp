#include "../header/ScalarConverter.hpp"

void    CharParsing(char x)
{
    if(x < 127 && x > 0 && std::isprint(x))
    {
        std::cout << "Char: " << x << "\n";
        return ;
    }
    std::cout << "Not printable char\n";
}

void    IntParsing(int x)
{
    if(x >= MAX_INT || x <= MIN_INT)
    {
        std::cout << "Not valid int\n";
        return ; 
    }
    std::cout << "Int: " << x << "\n";
    
}

void    FloatParsing(float x)
{
    if (x == floorf(x) && !std::isinf(x))
        std::cout << "Float: " << x << ".0f\n";
    else if (std::isnan(x) || std::isinf(x))
        std::cout << "Float: " << x << "f\n";
    else
        std::cout << "FFloat: " << x << "f\n";
}

void DoubleParsing(double x)
{
    if (x == floor(x) && !std::isinf(x))
        std::cout << "Double: " << x << ".0\n";
    else if (std::isnan(x) || std::isinf(x))
        std::cout << "Double: " << x << "\n";
    else
        std::cout << "DDouble: " << x << "\n";
}

void    CharScenario(std::string literal)
{
    char CharConvert = literal[0];
    std::cout << " - Char scenario -\n";
    CharParsing(CharConvert);
    IntParsing(static_cast<int>(CharConvert));
    FloatParsing(static_cast<float>(CharConvert));
    DoubleParsing(static_cast<double>(CharConvert));
}

void    IntScenario(std::string literal)
{
    double IntConvert = strtod(literal.c_str(), NULL);
    std::cout << " - Int scenario -\n";
    CharParsing(static_cast<char>(IntConvert));
    IntParsing(static_cast<int>(IntConvert));
    FloatParsing(static_cast<float>(IntConvert));
    DoubleParsing(static_cast<double>(IntConvert));
}

void    FloatScenario(std::string literal)
{
    float FloatConvert = strtof(literal.c_str(), NULL);
    std::cout << " - Float scenario -\n";
    CharParsing(static_cast<char>(FloatConvert));
    IntParsing(static_cast<int>(FloatConvert));
    FloatParsing(FloatConvert);
    DoubleParsing(static_cast<double>(FloatConvert));
}

void    DoubleScenario(std::string literal)
{
    double DoubleConvert = strtod(literal.c_str(), NULL);
    std::cout << " - Double scenario -\n";
    CharParsing(static_cast<char>(DoubleConvert));
    IntParsing(static_cast<int>(DoubleConvert));
    FloatParsing(static_cast<float>(DoubleConvert));
    DoubleParsing(DoubleConvert);
}
