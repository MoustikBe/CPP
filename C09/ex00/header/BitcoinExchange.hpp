#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class BitcoinExchange
{
private:
    std::map<std::string, float> _bitcoinRates;
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
//    BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange();
    void    LoadMap(void);
    float   GetRate(const std::string& date) const;
};


#endif