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
    PmergeMe(){};
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe(){};
    void    run(int argc, char **argv);
};

void insertOrderedDeque(std::deque<int>& SmallNb, int val);
void insertOrderedVector(std::vector<int>& SmallNb, int val);
std::vector<int> FordAlgoVector(std::vector<int> array);
std::deque<int> FordAlgoDeque(std::deque<int> array);

#endif