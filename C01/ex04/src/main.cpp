/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 09:42:57 by misaac-c          #+#    #+#             */
/*   Updated: 2025/05/12 12:08:16 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>

std::string replace_all(const std::string& line, const std::string& search, const std::string& replace)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(search, pos)) != std::string::npos)
    {
        result.append(line, pos, found - pos);
        result += replace;
        pos = found + search.length();
    }
    result += line.substr(pos);
    return result;
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
	std::ifstream f_in(argv[1]);
	if (f_in.is_open())
	{
		outfile = strcat(argv[1], ".replace");
		std::ofstream f_ou(outfile);
		while (std::getline(f_in, in_data))
		{
			in_data = replace_all(in_data, compare_string, replace_string);
			f_ou << in_data << "\n";
		}
	}
	else
	{
		std::cout << "Error, Invalid file\n";
		return(1);
	}
	return(0);
}
