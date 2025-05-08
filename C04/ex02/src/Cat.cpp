
#include "../header/Cat.hpp"

// # -- Cat Class -- # //

Cat::Cat() : _brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat [created, default constructor]\n";
}

Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain))
{
    std::cout << "Cat copied\n";
}

Cat& Cat::operator=(const Cat& other)
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

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat [removed]\n";
}

void Cat::makeSound() const
{
    std::cout << "Miaou !\n";
}