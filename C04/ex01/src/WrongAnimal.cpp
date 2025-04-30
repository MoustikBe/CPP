/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:18:13 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/30 13:29:56 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/WrongAnimal.hpp"


// # -- Animal Class -- # //

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal [created, default constructor]\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    type = other.type;
    std::cout << "WrongAnimal copied\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if(this != &other)
    {
        type = other.type;
        std::cout << "WrongAnimal object assigned\n";
    }
    return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal [removed]\n";
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal is making sound\n";
}

std::string WrongAnimal::getType() const
{
    return(type);
}

// # -- Dog Class -- # //

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

// # -- Cat Class -- # //