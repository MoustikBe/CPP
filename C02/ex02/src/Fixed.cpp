/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaac-c <misaac-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:52:59 by misaac-c          #+#    #+#             */
/*   Updated: 2025/04/22 13:21:12 by misaac-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// -- Constructor && Destructor -- //

Fixed::Fixed()
{
    //std::cout << "Default constructor called\n"; 
    _FixComa = 0;
}

Fixed::Fixed(const int  Nb_before)
{
    //std::cout << "Int constructor called\n"; 
    _FixComa = Nb_before * (1 << _NbBit);
}

Fixed::Fixed(const float  Nb_before)
{
    //std::cout << "Float constructor called\n"; 
    _FixComa = roundf(Nb_before * (1 << _NbBit));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Copy constructor called\n";
	*this = other;
}

// -- Constructor && Destructor -- //

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

/* -- Min&&Max -- */

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if(a.getRawBits() > b.getRawBits())
		return(b);
	return(a);
}

const Fixed& Fixed::min( const Fixed& a, const Fixed& b )
{
	if(a.getRawBits() > b.getRawBits())
		return(b);
	return(a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if(a.getRawBits() < b.getRawBits())
		return(b);
	return(a);
}

const Fixed& Fixed::max( const Fixed& a, const Fixed& b )
{
	if(a.getRawBits() < b.getRawBits())
		return(b);
	return(a);
}

/* -- Min&&Max -- */

/* -- Surchager -- */

Fixed Fixed::operator++()
{
	this->_FixComa++;
	return(*this);
}

Fixed Fixed::operator--()
{
	this->_FixComa--;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++this->_FixComa;
	return(temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--this->_FixComa;
	return(temp);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if(this != &other)
		_FixComa = other.getRawBits();
	return(*this);
}

float Fixed::operator+(const Fixed& other )
{
	return(this->toFloat() + other.toFloat());
}

float Fixed::operator-(const Fixed& other )
{
	return(this->toFloat() - other.toFloat());
}

float Fixed::operator*(const Fixed& other )
{
	return(this->toFloat() * other.toFloat());
}

float Fixed::operator/(const Fixed& other )
{
	return(this->toFloat() / other.toFloat());
}

bool Fixed::operator<(const Fixed &other)
{
	if(this->toFloat() < other.toFloat())
		return(true);
	return(false);
}

bool Fixed::operator>(const Fixed &other)
{
	if(this->toFloat() > other.toFloat())
		return(true);
	return(false);
}

bool Fixed::operator<=(const Fixed &other)
{
	if(this->toFloat() <= other.toFloat())
		return(true);
	return(false);
}

bool Fixed::operator>=(const Fixed &other)
{
	if(this->toFloat() >= other.toFloat())
		return(true);
	return(false);
}

bool Fixed::operator==(const Fixed &other)
{
	if(this->toFloat() == other.toFloat())
		return(true);
	return(false);
}

bool Fixed::operator!=(const Fixed &other)
{
	if(this->toFloat() != other.toFloat())
		return(true);
	return(false);
}

/* -- Surchager -- */

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	std::cout << other.toFloat();
	return(os);
}
