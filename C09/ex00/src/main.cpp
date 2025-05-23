#include "../header/BitcoinExchange.hpp"

bool VerifValidity(std::string FirstWord)
{
    int year = atoi(FirstWord.substr(0, 4).c_str());
    int month = atoi(FirstWord.substr(5, 7).c_str());
    int day = atoi(FirstWord.substr(8, 10).c_str());
    int day_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(year < 2009 || year > 2025 || month < 1 || month > 12 || day < 1 || day > 31)
        return(false);
    else if(day > day_in_month[month - 1])
    {
        if(month == 2 && day == 29 && year % 4 == 0 && (year % 100 != 0) || (year % 400 == 0))
            return(true);
        return(false);
    }
    return(true);
}

bool valid_date(std::string FirstWord)
{
    int j = 0;

    if(FirstWord.size() < 10)
        return(false);
    for(int i = 0; i < 10; i++)
    {
        if(i == 4 || i == 7)
        {
            if(FirstWord[i] != '-')
                return(false);
        }
        else if (FirstWord[i] < '0' || FirstWord[i] > '9')
            return(false);
    }
    if(!VerifValidity(FirstWord))
        return(std::cout << "Error: bad input => " << FirstWord << "\n", false);
    return(true);
}

bool smaler_data(std::string& A, std::string& B)
{
    if( A < B)
        return(true);
    return(false); 
}

std::string founding_data(std::string ref_date)
{
    std::ifstream f_data("data.csv");
    std::string data_date, line;
    std::string best_date = "";

    while (std::getline(f_data, line))
    {
        std::istringstream iss(line);
        std::getline(iss, data_date, ',');
        
        if(data_date == ref_date)
            return(f_data.close(), line);
        if(smaler_data(data_date, ref_date))
        {
            if(best_date.empty() || smaler_data(best_date, data_date))
                best_date = line;
        }
    }
    f_data.close();
    return(best_date);
}

int main(int argc, char **argv)
{
    BitcoinExchange BitcoinData;

    BitcoinData.LoadMap();
    if(argc != 2)
        return(std::cout << "Error: could not open file.\n", 1);
    
    std::string line, FirstWord, ValorStr, DataLine;
    float Valor, ValorData, Result; 
    std::ifstream f_in(argv[1]);
    
    if(!f_in.is_open())
        return(std::cout << "Error: could not open file.\n", 1);
    
    while(std::getline(f_in, line))
    {
        std::istringstream iss(line);
        std::getline(iss, FirstWord, '|');
        if(valid_date(FirstWord) == true)
        {
            std::getline(iss, ValorStr);
            Valor = strtod(ValorStr.c_str(), NULL);
            ValorData = BitcoinData.GetRate(FirstWord);
            Result = Valor * ValorData;
            if(Result < 0)
                std::cout << "Error: not a positive number.\n";
            else if(Result > 4294967295)
                std::cout <<  "Error: too large a number.\n";
            else 
                std::cout << FirstWord << "=> " << Valor << " = " << Result << "\n";
        }
    }
    return(0);
}
