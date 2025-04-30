#include "../header/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain builded [default constructor called]\n";
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain, copy constructor called\n";
    for(int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain, assignement operator called\n";
    if(this != &other)
    {
        for(int i = 0; i < 100; ++i)
            this->ideas[i] = other.ideas[i];
    }
    return(*this);
}

Brain::~Brain()
{
    std::cout << "Brain [removed]\n";
}

std::string Brain::GetIdea(int index)
{
    if(index > 0 && index < 100)
        return(ideas[index]);
    return(NULL);
}

void Brain::SetIdea(int index, std::string NewIdea)
{
    if(index > 0 && index < 100)
        ideas[index] = NewIdea;
    return ;
}