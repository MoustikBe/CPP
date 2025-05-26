#include "../header/RNP.hpp"


void  operation_scenario(void)
{

}

int main(int argc, char **argv)
{
    int j = 0;
    for(int i = 0; argv[j][i]; i++)
    {
        if(argv[j][i] == '-' || argv[j][i] == '+' || argv[j][i] == '*' || argv[j][i] == '/')
            operation_scenario();
    
    }
    return(0);
}