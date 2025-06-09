
#include "../header/RNP.hpp"

void  operation_scenario(std::stack<int>& data, char op)
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
