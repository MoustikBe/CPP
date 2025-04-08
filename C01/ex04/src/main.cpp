/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:42:57 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/08 12:40:51 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>

std::string change_line(std::string in_data, std::string replace_line, int index)
{
	std::string n_line;
	int i = 0;
	int i_;

	while (i != index)
	{
		n_line.push_back(in_data[i]);
		i++; 
	}
	i_ = i;
	n_line += replace_line;
	while (in_data[i_] != ' ' && in_data[i_])
		i_++;
	while (in_data[i_])
	{
		n_line.push_back(in_data[i_]);
		i_++; 
	}
	return(n_line);
}


int main(int argc, char **argv)
{
	if (argc != 4)
	{
	    std::cout << "Error\n"; 
	    return(1); 
	}
	char *outfile;
	std::string in_data;
	std::string compare_string = argv[2];
	std::string replace_string = argv[3];
	std::ifstream f_in{argv[1]};
	int collect_index;
	if (f_in.is_open())
	{
		outfile = strcat(argv[1], ".replace");
		std::ofstream f_ou{outfile};
		while (std::getline(f_in, in_data))
		{
			collect_index = in_data.find(compare_string);
			if(collect_index != -1)
				in_data = change_line(in_data, replace_string, collect_index);
			f_ou << in_data;
			f_ou << "\n";
		}
	}
	else
	{
		std::cout << "Error, Invalid file\n";
		return(1);
	}
	return(0);
}
