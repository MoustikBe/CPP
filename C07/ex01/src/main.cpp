#include "../header/Template.hpp"

template<typename T>
void Add(T& A)
{
    A++;
}

void DisplayArray(int *ArrayTest, int len)
{
    for(int i = 0; i < len ; i++)
        std::cout << ArrayTest[i];
    std::cout << "\n";
}

int main( void ) 
{
    int ArrayTest[] = {1, 2, 3, 4, 5};

    std::cout << "Avant passage par iter\n";
    DisplayArray(ArrayTest, 4);
    iter(ArrayTest, 4, Add);
    std::cout << "Apres passage par iter\n";
    DisplayArray(ArrayTest, 4);
    return (0);
}