#include "../header/ScalarConverter.hpp"

void    CharScenario(std::string literal)
{
    char CharConvert = literal[0];
    std::cout << " - Char scenario -\nChar: " << CharConvert << "\n";
    std::cout << "Int: " << static_cast<int>(CharConvert) << "\n";
    std::cout << "Float: " << static_cast<float>(CharConvert) << "\n";
    std::cout << "Double: " << static_cast<double>(CharConvert) << "\n";
}

void    IntScenario(std::string literal)
{
    int IntConvert = strtol(literal.c_str(), NULL, 10);
    std::cout << " - Int scenario -\nInt: " << IntConvert << "\n";
    std::cout << "Char: " << static_cast<char>(IntConvert) << "\n";
    std::cout << "Float: " << static_cast<float>(IntConvert) << "\n";
    std::cout << "Double: " << static_cast<double>(IntConvert) << "\n";
}

void    FloatScenario(std::string literal)
{
    float FloatConvert = strtof(literal.c_str(), NULL);
    std::cout << " - Float scenario -\nFloat: " << FloatConvert << "f\n";
    std::cout << "Char: " << static_cast<char>(FloatConvert) << "\n";
    std::cout << "Int: " << static_cast<int>(FloatConvert) << "\n";
    std::cout << "Double: " << static_cast<double>(FloatConvert) << "\n";
}

void    DoubleScenario(std::string literal)
{
    double DoubleConvert = strtod(literal.c_str(), NULL);
    std::cout << " - Double scenario -\nDouble: " << DoubleConvert << "\n";
    std::cout << "Char: " << static_cast<char>(DoubleConvert) << "\n";
    std::cout << "Int: " << static_cast<int>(DoubleConvert) << "\n";
    std::cout << "Float: " << static_cast<float>(DoubleConvert) << "\n";
}
