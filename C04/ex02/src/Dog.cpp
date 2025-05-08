
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
    if (this != &other)
	{
		Animal::operator=(other);
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
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
