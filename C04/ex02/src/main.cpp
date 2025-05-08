/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:59:01 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/08 20:21:50 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"
#include "../header/Cat.hpp"
#include "../header/Dog.hpp"
#include "../header/WrongAnimal.hpp"

int main()
{
    Brain NewBrain;
    NewBrain.SetIdea(5, "I think");
    std::cout << "Idea 5 -> " << NewBrain.GetIdea(5) << "\n";
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    return(0);
}