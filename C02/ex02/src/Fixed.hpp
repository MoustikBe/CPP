#ifndef _FIXED_CPP_
#define _FIXED_CPP_

#include <iostream>
#include <math.h>

class Fixed
{
private:
    int _FixComa;
    static const int _NbBit = 8;
public:
    Fixed();
    Fixed(const int  Nb_before);
    Fixed(const float  Nb_before);
    Fixed(const Fixed &other);
    ~Fixed();
    // -- Surchager -- //
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    Fixed& operator=(const Fixed &other);
    float operator+(const Fixed &other);
    float operator-(const Fixed &other);
    float operator*(const Fixed &other);
    float operator/(const Fixed &other);
    bool operator<(const Fixed &other);
    bool operator>(const Fixed &other);
    bool operator<=(const Fixed &other);
    bool operator>=(const Fixed &other);
    bool operator==(const Fixed &other);
    bool operator!=(const Fixed &other);
    // -- Surchager -- //
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    static Fixed& min( Fixed& a, Fixed& b );
    static const Fixed& min( const Fixed& a, const Fixed& b );
    static Fixed& max( Fixed& a, Fixed& b );
    static const Fixed& max( const Fixed& a, const Fixed& b );
};

std::ostream& operator<<(std::ostream& os, const Fixed &other);

#endif