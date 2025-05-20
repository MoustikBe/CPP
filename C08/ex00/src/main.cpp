#include "../header/easyfind.hpp"

int main( void ) 
{
    std::vector<int> VectorTest;

    VectorTest.push_back(1);
    VectorTest.push_back(4);
    VectorTest.push_back(6220);
    VectorTest.push_back(4444);
    std::vector<int>::iterator it = easyfind(VectorTest, 4);
    std::cout << *it <<  "\n";
}