#ifndef ARRAY_HPP
# define ARRAY_HPP

# define MAX_VAL 750
#include <iostream>
#include <string.h>
#include <exception>
#include <ctime>
#include <cstdlib>

template<typename T>
class Array
{
private:
    T               *_array;
    unsigned int    _len;
public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();
    T& operator[](const unsigned int index);
    unsigned int size();
};

#include "Array.tpp"

#endif