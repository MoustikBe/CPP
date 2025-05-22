#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <list>
#include <iostream>
#include <iterator>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    inline iterator	begin() {return(this->c.begin());};
    inline iterator end() {return(this->c.end());};
    inline const_iterator begin() const {return(this->c.begin());};
    inline const_iterator end() const {return(this->c.end());};
};

#endif