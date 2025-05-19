
#include "../header/Base.hpp"


Base* generate(void)
{
    //Faire une generation aleatoire d'un des trois type A B C et en retourner l'addresse
    srand(static_cast<unsigned int>(time(0)));
    int RandomVal = rand() % 3;
    switch (RandomVal)
    {
        case 0:
            std::cout << "Object A created\n";
            return(new A());
        case 1:
            std::cout << "Object B created\n";
            return(new B());
        case 2:
            std::cout << "Object C created\n";
            return(new C());
        default:
            std::cout << "NO Object created, that is not normal\n";
            return(NULL);
    }
    return(NULL);
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "Class A\n";
    else if(dynamic_cast<B*>(p))
        std::cout << "Class B\n";
    else if(dynamic_cast<C*>(p))
        std::cout << "Class C\n";
    else
        std::cout << "Unknow class\n";
}


void identify(Base& p)
{
    //Identifier le type A B ou C a partir d'une addresse 
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Class A\n";
        return ;
    }
    catch(...){}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Class B\n";
        return ;
    }
    catch(...)
    {}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Class C\n";
        return ;
    }
    catch(...)
    {}
    std::cout << "Unknow class\n"; 
}

int main()
{
    Base *X;
    std::cout << "New object creation\n";
    X = generate();
    if(!X)
    {
        std::cout << "Error in the object creation\n";
        return(1);
    }
    std::cout << "Testing the identify using pointer\n";
    identify(X);
    std::cout << "Testing the identify using reference\n";
    identify(*X);
    return(0);
}