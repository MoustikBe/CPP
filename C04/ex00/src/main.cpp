/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:59:01 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/30 13:38:55 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"
#include "../header/WrongAnimal.hpp"

int main()
{
    /* # -- ANIMAL -- # */
    std::cout << "TESTING ANIMAL\n";
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    /* # -- WRONG_ANIMAL -- # */
    std::cout << "TESTING WRONG_ANIMAL\n";
    const WrongAnimal* WrongMeta = new WrongAnimal();
    const WrongAnimal* WrongI = new WrongCat();
    std::cout << WrongI->getType() << " " << std::endl;
    WrongI->makeSound(); //will output the wrong cat sound!
    WrongMeta->makeSound();
    
    delete meta;
    delete WrongMeta;
    delete i;
    delete WrongI;
    delete j;
    
    return 0;
}
