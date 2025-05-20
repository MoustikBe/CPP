#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <iostream>
#include <vector>

template<typename T>
typename T::iterator easyfind(T& vec, int nb)
{
    return std::find(vec.begin(), vec.end(), nb);
}


#endif