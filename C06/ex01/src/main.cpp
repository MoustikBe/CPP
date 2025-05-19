#include "../header/Serialization.hpp"

int main(void)
{
    Data A;
    Data *B = &A;
    Data *C;
    uintptr_t Address;

    A.nb = 15;
    std::cout << "Address of &A before serialization " << B << "\n";
    C = B;
    std::cout << "Address store in C\n";
    Address = Serialization::serialize(B);
    std::cout << "Valor store in uintptr_t " << Address << "\n";
    B = Serialization::deserialize(Address);
    std::cout << "Adress of &A before serialization  " << B << "\n";
    if(C == B)
        std::cout << "Address match\n";
    else
        std::cout << "Addres don't match, strange.....\n";
    return(0);
}