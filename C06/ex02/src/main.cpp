
#include "../header/Base.hpp"


Base* generate(void)
{
    //Faire une generation aleatoire d'un des trois type A B C et en retourner l'addresse
    srand(static_cast<unsigned int>(time(0)));
    int RandomVal = rand() % 3;
    switch (RandomVal)
    {
        case 0:
            return(new A());
        case 1:
            return(new B());
        case 2:
            return(new C());
        default:
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
    X = generate();
    identify(X);
    identify(*X);
    return(0);
}