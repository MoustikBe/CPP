#include "../header/Template.hpp"

template<typename T>
void Add(T& A)
{
    A++;
}

template<typename T>
void DisplayArray(T* ArrayTest, int len)
{
    for(int i = 0; i < len ; i++)
        std::cout << ArrayTest[i];
    std::cout << "\n";
}

int main( void ) 
{
    //int ArrayInt[] = {1, 2, 3, 4, 5};
    char ArrayChar[] = {'A', 'B', 'C', 'D', 'E'};

    std::cout << "Avant passage par iter\n";
    DisplayArray(ArrayChar, 4);
    iter(ArrayChar, 4, Add);
    std::cout << "Apres passage par iter\n";
    DisplayArray(ArrayChar, 4);
    return (0);
}