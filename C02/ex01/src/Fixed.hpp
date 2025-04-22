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
    Fixed& operator=(const Fixed &other);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed &other);

#endif