#ifndef _FIXED_CPP_
#define _FIXED_CPP_

#include <iostream>

class Fixed
{
private:
    int _FixComa;
    static const int _NbBit = 8;
public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();
    Fixed& operator=(const Fixed &other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif