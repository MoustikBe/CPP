/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:52:59 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/22 11:31:06 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n"; 
    _FixComa = 0;
}

Fixed::Fixed(const int  Nb_before)
{
    std::cout << "Int constructor called\n"; 
    _FixComa = Nb_before * (1 << _NbBit);
}

Fixed::Fixed(const float  Nb_before)
{
    std::cout << "Float constructor called\n"; 
    _FixComa = roundf(Nb_before * (1 << _NbBit));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
	if(this != &other)
		_FixComa = other.getRawBits();
	return(*this);
}

int Fixed::getRawBits(void)const
{
    return(_FixComa);
}

void Fixed::setRawBits(int const raw)
{
	_FixComa = raw;
}

float Fixed::toFloat(void)const 
{
	float val_return = (float)_FixComa / (1 << _NbBit);
	return(val_return);
}

int Fixed::toInt(void)const 
{
	int val_return = _FixComa / (1 << _NbBit);
	return(val_return);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	std::cout << other.toFloat();
	return(os);
}
