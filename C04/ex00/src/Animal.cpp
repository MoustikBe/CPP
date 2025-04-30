/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:04:45 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/30 13:06:41 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"

// # -- Animal Class -- # //

Animal::Animal() : type("Animal")
{
    std::cout << "Animal [created, default constructor]\n";
}

Animal::Animal(const Animal& other)
{
    type = other.type;
    std::cout << "Animal copied\n";
}

Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
    {
        type = other.type;
        std::cout << "Animal object assigned\n";
    }
    return(*this);
}

Animal::~Animal()
{
    std::cout << "Animal [removed]\n";
}

void Animal::makeSound() const
{
    std::cout << "Animal is making sound\n";
}

std::string Animal::getType() const
{
    return(type);
}

// # -- Dog Class -- # //

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog [created, default constructor]\n";
}

Dog::Dog(const Dog& other) : Animal(other)
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
    std::cout << "Dog [removed]\n";
}

void Dog::makeSound() const
{
    std::cout << "Waf !\n";
}

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
