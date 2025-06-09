
#include "../header/MutantStack.hpp"

int main()
{
    /* Part that is give by the subject */
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    /* My tests */
    MutantStack<int> mstack2;
    for(int i = 0; i < 10; i++)
        mstack2.push(i + 12);
    MutantStack<int>::iterator it2 = mstack2.begin();
    std::cout << "begin of mstack2 -> " <<  *it2 << "\n";
    MutantStack<int>::iterator ite2 = mstack2.end();
    ite2--;
    std::cout << "end of mstack2 -> " <<  *ite2 << "\n";
    return 0;
}