#include "../header/RNP.hpp"

int main(int argc, char **argv)
{
    std::stack<int> data;

    if(argc != 2)
        return(std::cout << "Error\n", 1);
    int j = 1;
    for(int i = 0; argv[j][i]; i++)
    {
        if(argv[j][i] == '-' || argv[j][i] == '+' || argv[j][i] == '*' || argv[j][i] == '/')
            operation_scenario(data, argv[j][i], i);
        else if(isdigit(argv[j][i]))
            data.push(argv[j][i] - '0');
    }
    if(data.size() != 1)
        return(std::cout << "Error\n", 0);
    return(std::cout << data.top() << "\n", 0);
}
