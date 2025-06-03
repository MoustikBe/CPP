
#include "../header/PmergeMe.hpp"



int main(int argc, char **argv)
{
    if(argc < 2)
        return(std::cout << "Error\n", 0);
    PmergeMe ToMerge;

    ToMerge.run(argc, argv);
    return(0);
}

