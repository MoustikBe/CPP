
#include "../header/PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) : _Varray(other._Varray), _Darray(other._Darray) {}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		_Varray = other._Varray;
		_Darray = other._Darray;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

void    PmergeMe::run(int argc, char **argv)
{
    CreateArray(_Varray, argv);
    CreateArray(_Darray, argv);
    PrintArray(_Varray, "Before: ");
    PrintArray(_Darray, "Before: ");
    _Varray = VectorFordAlgo(_Varray);
    _Darray = DequeFordAlgo(_Darray);
    PrintArray(_Varray, "After: ");
    PrintArray(_Darray, "After: ");
}

std::vector<int> generateJacobsthal(int n)
{
    std::vector<int> jacob;
    jacob.push_back(0);
    jacob.push_back(1);
    while (jacob.back() < n)
        jacob.push_back(jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2]);
    return jacob;
}

std::vector<int> getJacobInsertionOrderVector(int size)
{
    std::vector<int> jacob = generateJacobsthal(size);
    std::vector<bool> inserted(size, false);
    std::vector<int> order;

    for (size_t i = 1; i < jacob.size(); ++i)
    {
        int index = jacob[i] - 1;
        if (index < size && !inserted[index])
        {
            order.push_back(index);
            inserted[index] = true;
        }
    }
    for (int i = 0; i < size; ++i)
    {
        if (!inserted[i])
            order.push_back(i);
    }
    return order;
}

std::deque<int> getJacobInsertionOrderDeque(int size)
{
    std::vector<int> jacob = generateJacobsthal(size);
    std::vector<bool> inserted(size, false);
    std::deque<int> order;

    for (size_t i = 1; i < jacob.size(); ++i)
    {
        int index = jacob[i] - 1;
        if (index < size && !inserted[index])
        {
            order.push_back(index);
            inserted[index] = true;
        }
    }
    for (int i = 0; i < size; ++i)
    {
        if (!inserted[i])
            order.push_back(i);
    }
    return order;
}

void insertOrderedVector(std::vector<int>& SmallNb, int val)
{
    std::vector<int>::iterator it = SmallNb.begin();
    while(it != SmallNb.end() && *it < val)
        it++;
    SmallNb.insert(it, val);
}

void insertOrderedDeque(std::deque<int>& SmallNb, int val)
{
    std::deque<int>::iterator it = SmallNb.begin();
    while(it != SmallNb.end() && *it < val)
        it++;
    SmallNb.insert(it, val);
}

std::vector<int> VectorFordAlgo(std::vector<int> array)
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
    SmalNb = VectorFordAlgo(SmalNb);
    std::vector<int> insertionOrder = getJacobInsertionOrderVector(BigNb.size());
    for(size_t i = 0; i < insertionOrder.size(); ++i)
    {
        val = BigNb[insertionOrder[i]];
        insertOrderedVector(SmalNb, val);
    }
    return(SmalNb);
}

std::deque<int> DequeFordAlgo(std::deque<int> array)
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
    SmalNb = DequeFordAlgo(SmalNb);
    std::deque<int> insertionOrder = getJacobInsertionOrderDeque(BigNb.size());
    for(size_t i = 0; i < insertionOrder.size(); ++i)
    {
        val = BigNb[insertionOrder[i]];
        insertOrderedDeque(SmalNb, val);
    }
    return(SmalNb);
}
