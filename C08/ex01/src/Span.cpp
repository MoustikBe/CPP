#include "../header/Span.hpp"

Span::Span()
{
    _N = 0;
    _vec.reserve(0);
    std::cout << "Default constructor [Span]\n";
}

Span::Span(unsigned int N)
{
    _vec.reserve(N);
    _N = N;
    std::cout << "Constructor [SPAN]\n";
}

Span::Span(const Span& other)
{
    std::cout << "Copy constructor [Span]\n";
    this->_vec = other._vec;
    this->_N = other._N;
}

Span::~Span()
{
    std::cout << "Destructor [Span]\n";
}

Span& Span::operator=(const Span& other)
{
    if(this != &other)
    {
        this->_vec = other._vec;
        this->_N = other._N;
    }
    return(*this);
}

void Span::addNumber(unsigned int N)
{
    if(_vec.size() >= _N)
        throw(std::out_of_range("Error : Span full\n"));
    _vec.push_back(N);
}

unsigned int Span::shortestSpan()
{
    unsigned int ShortestVal = MAX_U_I; 
    if(_vec.size() < 2)
        throw(std::out_of_range("Error : Span to litle\n"));

    std::vector<unsigned int> copy_vec(_vec);
    std::sort(copy_vec.begin(), copy_vec.end());
    for(size_t i = 1; i < copy_vec.size(); i++)
    {
        if(copy_vec[i] - copy_vec[i - 1] < ShortestVal)
            ShortestVal = copy_vec[i] - copy_vec[i - 1];
    }
    return(ShortestVal);
}

unsigned int Span::longestSpan()
{
    if(_vec.size() < 2)
        throw(std::out_of_range("Error : Span to litle\n"));
    std::vector<unsigned int>::iterator it = std::max_element(_vec.begin(), _vec.end());
    std::vector<unsigned int>::iterator it2 = std::min_element(_vec.begin(), _vec.end());
    return(*it - *it2);
}
