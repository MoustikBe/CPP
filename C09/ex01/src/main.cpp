#include "../header/RNP.hpp"


void  operation_scenario(std::stack<int>& data, char op, int i)
{   
    int result, A, B;
    if(data.size() < 2)
        return ;

    A = data.top();
    data.pop();
    B = data.top();
    data.pop();
    switch (op)
    {
        case '-':{result = B - A; break;}
        case '+':{result = B + A; break;}
        case '*':{result = B * A; break;}
        case '/':{result = B / A; break;}
        default: {std::cout << "Error\n"; break;}
    }
    data.push(result);
}

void print_content(std::stack<int> _data)
{
    while(_data.size())
    {
        std::cout << "Data -> " << _data.top() << "\n";
        _data.pop();
    }
    return ; 
}

int main(int argc, char **argv)
{
    std::stack<int> data;

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