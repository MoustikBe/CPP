#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

template<typename T>
typename T::const_iterator easyfind(const T& vec, int nb)
{
    typename T::const_iterator it;

    it = std::find(vec.begin(), vec.end(), nb);
    if(it == vec.end())
        throw(std::out_of_range("out of bound"));
    return (it);
}

#endif