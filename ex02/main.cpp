/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:25:21 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/04 11:35:01 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "The memory address of the  stringVAR -> " << &brain << "\n";
	std::cout << "The memory address held by stringPTR -> " << stringPTR << "\n";
	std::cout << "The memory address held by stringREF -> " << &stringREF << "\n";
	std::cout << " --------------------------------- \n";
	std::cout << "The memory address of the  stringVAR -> " << brain << "\n";
	std::cout << "The memory address held by stringPTR -> " << *stringPTR << "\n";
	std::cout << "The memory address held by stringREF -> " << stringREF << "\n";	 
}
