/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:04:45 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/08 20:01:18 by max              ###   ########.fr       */
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
