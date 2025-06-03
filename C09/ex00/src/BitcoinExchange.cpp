#include "../header/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){};

BitcoinExchange::~BitcoinExchange(){};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _bitcoinRates(other._bitcoinRates){};

BitcoinExchange&    BitcoinExchange::operator=(const BitcoinExchange&  other)
{
    if(this != &other)
        this->_bitcoinRates = other._bitcoinRates;
    return(*this);
}

void BitcoinExchange::LoadMap(void)
{
    std::string line, date, value;
    std::ifstream ft_data("data.csv");
    
    if(!ft_data.is_open())
    {
        std::cout << "File not possible to open\n";
        return ;
    }
    std::getline(ft_data, line);
    while(std::getline(ft_data, line))
    {
        std::istringstream iss(line);
        std::getline(iss, date, ',');
        std::getline(iss, value);
        this->_bitcoinRates[date]  = strtof(value.c_str(), NULL);
    }
}

float BitcoinExchange::GetRate(const std::string& date) const
{
    std::map<std::string, float>::const_iterator it = _bitcoinRates.find(date);
    if(it != _bitcoinRates.end())
        return(it->second);
    it = _bitcoinRates.lower_bound(date);
    if(it != _bitcoinRates.begin())
        it--;
    if(it != _bitcoinRates.end())
        return(it->second);
    return(0.0f);
}
