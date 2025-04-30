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
    Brain NewBrain;
    NewBrain.SetIdea(5, "I think");
    std::cout << "Idea 5 -> " << NewBrain.GetIdea(5) << "\n";
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    return(0);
}