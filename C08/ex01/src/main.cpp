
#include "../header/Span.hpp"

int main()
{
    int tmp[] = {6, 3, 17, 9, 11};
    std::vector<int> FirstVec(tmp, tmp + 5);

    Span sp = Span(10);
    
    sp.addNumbers(FirstVec.begin(), FirstVec.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}
