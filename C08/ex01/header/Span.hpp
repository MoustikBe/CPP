#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

#define MAX_U_I 4294967295

class Span
{
private:
    unsigned int                _N;
    std::vector<unsigned int>   _vec;
public:
    Span();
    Span(unsigned int N);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();
    void addNumber(unsigned int N);
    template<typename it>
    void addNumbers(it start, it end) 
    {
        if((std::distance(start, end) + _vec.size()) >= _N) 
            throw(std::out_of_range("Out of the range\n"));
        _vec.insert(_vec.end(), start, end);
    }
    unsigned int shortestSpan();
    unsigned int longestSpan();
};

#endif