
#include "../header/PmergeMe.hpp"


int main(int argc, char **argv)
{
    PmergeMe FordAlgo;
    if(argc < 2)
        return(std::cout << "Error\n", 0);
    FordAlgo.run(argv);
    return(0);
}

