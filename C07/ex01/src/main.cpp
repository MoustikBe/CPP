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
    {
        std::cout << ArrayTest[i];
        std::cout << " ";
    }
    std::cout << "\n";
}

template<typename T>
int LenArray(T* ArrayTest)
{
    int i = 0;
    while(ArrayTest[i])
        i++;
    return(i);
}

int main( void ) 
{
    int ArrayInt[] = {1, 2, 3, 4, 5};
    char ArrayChar[] = {'A', 'B', 'C', 'D', 'E'};
    double ArrayDouble[] = {1.545, 2.55, 3.785, 6.5577, 4.12}; 

    std::cout << " -- INT array test -- \n";
    std::cout << "Avant passage par iter\n";
    DisplayArray(ArrayInt, 4);
    iter(ArrayInt, 4, Add);
    std::cout << "Apres passage par iter\n";
    DisplayArray(ArrayInt, 4);

    std::cout << " -- CHAR array test -- \n";
    std::cout << "Avant passage par iter\n";
    DisplayArray(ArrayChar, 4);
    iter(ArrayChar, 4, Add);
    std::cout << "Apres passage par iter\n";
    DisplayArray(ArrayChar, 4);

    std::cout << " -- FLOAT array test -- \n";
    std::cout << "Avant passage par iter\n";
    DisplayArray(ArrayDouble, 4);
    iter(ArrayDouble, 4, Add);
    std::cout << "Apres passage par iter\n";
    DisplayArray(ArrayDouble, 4);
    return (0);
}