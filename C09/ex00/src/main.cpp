#include "../header/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
        return(std::cout << "Error: could not open file.\n", 1);
    std::ifstream f_in(argv[1]);
    if(!f_in.is_open())
        return(std::cout << "Error: could not open file.\n", 1);
    
    std::string line;
    while(std::getline(f_in, line))
    {
        std::cout << line << "\n";
        
    }
    return(0);
}