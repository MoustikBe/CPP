#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>
#include <string.h>
template<typename T>
void iter(T* AddArray, int Lenght, void func(T &))
{
    for(int i = 0; i < Lenght; i++)
        func(AddArray[i]);
}

#endif