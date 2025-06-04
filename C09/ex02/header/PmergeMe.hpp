#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <stdlib.h>

class PmergeMe
{
private:
    std::vector<int>    _Varray;
    std::deque<int>     _Darray;
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();
    void    run(int argc, char **argv);
};

template<typename T>
void PrintArray(T& A, std::string msg)
{
    std::cout << msg;
    for(int i = 0; i < A.size() && i < 5; i++)
        std::cout << A[i] << " ";
    if(A.size() > 5)
        std::cout << "[...]";
    std::cout << std::endl;
}

template<typename T>
void CreateArray(T& A, char **argv)
{
    for(int i = 1; argv[i]; i++)
    {
        if(!atoi(argv[i]));
        else
            A.push_back(atoi(argv[i]));
    } 
}

std::vector<int> generateJacobsthal(int n);
std::vector<int> getJacobInsertionOrderVector(int size);
std::deque<int> getJacobInsertionOrderDeque(int size);
std::vector<int> VectorFordAlgo(std::vector<int> array);
std::deque<int> DequeFordAlgo(std::deque<int> array);
void insertOrderedVector(std::vector<int>& SmallNb, int val);
void insertOrderedDeque(std::deque<int>& SmallNb, int val);

#endif