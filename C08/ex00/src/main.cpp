#include "../header/easyfind.hpp"

void DisplayVecContent(const std::vector<int>& VectorTest)
{
    for(int i = 0; i < VectorTest.size(); i++)
    {
        std::cout << VectorTest[i];
        std::cout << " ";
    }
    std::cout << "\n";
}


int main( void ) 
{
    // All good scenario // 
    try
    {
        std::vector<int> VectorTest; 
        VectorTest.push_back(1);
        VectorTest.push_back(2);
        VectorTest.push_back(5);
        VectorTest.push_back(745);
        std::vector<int>::const_iterator it = easyfind(VectorTest, 2);
        DisplayVecContent(VectorTest);
        std::cout << "Vector index trouver -> : " << *it <<"\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << " # ------------- # \n";
    // Out of bound scenario // 
    try
    {
        std::vector<int> VectorTest; 
        VectorTest.push_back(1);
        VectorTest.push_back(2);
        VectorTest.push_back(5);
        VectorTest.push_back(745);
        std::vector<int>::const_iterator it = easyfind(VectorTest, 22);
        DisplayVecContent(VectorTest);
        std::cout << "Vector index trouver -> : " << *it <<"\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}