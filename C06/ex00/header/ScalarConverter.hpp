#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <limits>

#define MAX_INT 2147483647
#define MIN_INT -2147483648

class ScalarConvert
{
private:
    ScalarConvert();
    ScalarConvert(const ScalarConvert&);
    ScalarConvert& operator=(const ScalarConvert);
    ~ScalarConvert();
public:
    static void  convert(std::string literal);

};

void    CharScenario(std::string literal);
void    IntScenario(std::string literal);
void    FloatScenario(std::string literal);
void    DoubleScenario(std::string literal);

#endif