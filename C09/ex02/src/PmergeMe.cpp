#include "../header/PmergeMe.hpp"

PmergeMe::PmergeMe(const PmergeMe& other) : _Varray(other._Varray), _Darray(other._Darray){};
PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if(this != &other)
    {
        this->_Darray = other._Darray;
        this->_Varray = other._Varray;
    }
    return(*this);
}

void insertOrderedDeque(std::deque<int>& SmallNb, int val)
{
    std::deque<int>::iterator it = SmallNb.begin();
    while(it != SmallNb.end() && *it < val)
        it++;
    SmallNb.insert(it, val);
}

void insertOrderedVector(std::vector<int>& SmallNb, int val)
{
    std::vector<int>::iterator it = SmallNb.begin();
    while(it != SmallNb.end() && *it < val)
        it++;
    SmallNb.insert(it, val);
}

std::vector<int> FordAlgoVector(std::vector<int> array)
{
    if(array.size() <= 1)
        return(array);
    int j = 0, val = 0;
    int SubNb = array.size() / 2;
    
    std::vector<int> BigNb;
    std::vector<int> SmalNb;

    for(int i = 0; i < SubNb; i++)
    {
        int a = array[j];
        int b = array[j + 1];
        j += 2;
        if(a > b)
            std::swap(a, b);
        SmalNb.push_back(a);
        BigNb.push_back(b);
    }
    if(array.size() % 2 != 0)
        SmalNb.push_back(array.back());
    SmalNb = FordAlgoVector(SmalNb);
    for(size_t i = 0; i < BigNb.size(); i++)
    {
        val = BigNb[i];
        insertOrderedVector(SmalNb, val);
    }
    return(SmalNb);
}

std::deque<int> FordAlgoDeque(std::deque<int> array)
{
    if(array.size() <= 1)
        return(array);
    int j = 0, val = 0;
    int SubNb = array.size() / 2;
    
    std::deque<int> BigNb;
    std::deque<int> SmalNb;

    for(int i = 0; i < SubNb; i++)
    {
        int a = array[j];
        int b = array[j + 1];
        j += 2;
        if(a > b)
            std::swap(a, b);
        SmalNb.push_back(a);
        BigNb.push_back(b);
    }
    if(array.size() % 2 != 0)
        SmalNb.push_back(array.back());
    SmalNb = FordAlgoDeque(SmalNb);
    for(size_t i = 0; i < BigNb.size(); i++)
    {
        val = BigNb[i];
        insertOrderedDeque(SmalNb, val);
    }
    return(SmalNb);
}

void PmergeMe::run(int argc, char **argv)
{
    // Deque // 
    for(int i = 1; argv[i]; i++)
        _Darray.push_back(atoi(argv[i]));
    _Darray = FordAlgoDeque(_Darray);
    // Vector //
    for(int i = 1; argv[i]; i++)
        _Varray.push_back(atoi(argv[i]));
    _Varray = FordAlgoVector(_Varray);

    for(int i = 0; i < _Varray.size(); i++)
        std::cout << "_Varray -> " << _Varray[i] << "\n";
    std::cout << " --------------- " << std::endl;
    for(int i = 0; i < _Darray.size(); i++)
        std::cout << "_Darray -> " << _Darray[i] << "\n";
}
