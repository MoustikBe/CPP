
#include "../header/WrongCat.hpp"
#include "../header/WrongAnimal.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat [created, default constructor]\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat copied\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
    {
        type = other.type;
        std::cout << "WrongCat object assigned\n";
    }
    return(*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat [removed]\n";
}

void WrongCat::makeSound() const
{
    std::cout << "Miaou ![wrong :/]\n";
}
