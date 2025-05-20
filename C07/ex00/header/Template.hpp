#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template<typename T>
void swap(T& A, T& B)
{
    T   C;
    C = A;
    A = B;
    B = C;
}

template<typename T>
T& min(T& A, T& B)
{
    if(A > B)
        return(B);
    else if (A < B)
        return(A);
    return(B);
}

template<typename T>
T& max(T& A, T& B)
{
    if(A > B)
        return(A);
    else if (A < B)
        return(B);
    return(B);
}

#endif