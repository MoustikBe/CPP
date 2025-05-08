
#include "../header/Cat.hpp"

// # -- Cat Class -- # //

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat [created, default constructor]\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copied\n";
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        type = other.type;
        std::cout << "Cat object assigned\n";
    }
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Cat [removed]\n";
}

void Cat::makeSound() const
{
    std::cout << "Miaou !\n";
}
