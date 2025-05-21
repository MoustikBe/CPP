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
    unsigned int shortestSpan();
    unsigned int longestSpan();
};

#endif