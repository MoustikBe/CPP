
#include "../header/Dog.hpp"

// # -- Dog Class -- # //

Dog::Dog() : _brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog [created, default constructor]\n";
}

Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Dog copied\n";
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        type = other.type;
        std::cout << "Dog object assigned\n";
    }
    return(*this);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog [removed]\n";
}

void Dog::makeSound() const
{
    std::cout << "Waf !\n";
}
