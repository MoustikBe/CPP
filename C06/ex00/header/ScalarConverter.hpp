#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include  <iostream>

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

#endif