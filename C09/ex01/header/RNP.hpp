#ifndef RNP_HPP
# define RNP_HPP

#include <iostream>
#include <stack>
#include <algorithm>

class RNP
{
private:
    std::stack<int> _stack;
public:
    RNP();
    RNP(const RNP& other);
    RNP& operator=(const  RNP& other);
    ~RNP();
};


#endif