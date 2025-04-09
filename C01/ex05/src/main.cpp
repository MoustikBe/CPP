/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:49:29 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/09 12:22:08 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	angry_client;

	angry_client.complain("DEBUG");
	angry_client.complain("INFO");
	angry_client.complain("WARNING");
	angry_client.complain("ERROR");
	return(0);
}
