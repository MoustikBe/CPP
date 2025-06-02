
#include "../header/PmergeMe.hpp"

void insertOrdered(std::vector<int>& SmallNb, int val)
{
    std::vector<int>::iterator it = SmallNb.begin();
    while(it != SmallNb.end() && *it < val)
        it++;
    SmallNb.insert(it, val);
}

std::vector<int> FordAlgo(std::vector<int> array)
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
    SmalNb = FordAlgo(SmalNb);
    for(size_t i = 0; i < BigNb.size(); i++)
    {
        val = BigNb[i];
        insertOrdered(SmalNb, val);
    }
    return(SmalNb);
}


int main(int argc, char **argv)
{
    if(argc < 2)
        return(std::cout << "Error\n", 0);
    std::vector<int> array;

    for(int i = 1; argv[i]; i++)
        array.push_back(atoi(argv[i]));
    for(int i = 0; array[i]; i++)
        std::cout << "Not sorted -> " << array[i] << std::endl;
    array = FordAlgo(array);
    for(int i = 0; i < array.size(); i++)
        std::cout << "Sorted -> " << array[i] << "\n";
    return(0);
}

