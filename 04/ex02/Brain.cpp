#include "Brain.hpp"

Brain::Brain()
{
    int i = -1;
    while (++i < 100)
        ideas[i] = "idea";
    std::cout << "brain constructed" << std::endl;
}

Brain::~Brain()
{
    std::cout << "brain destructed" << std::endl;
}

Brain::Brain(Brain const &other)
{
    std::cout << "brain copy constructor" << std::endl;
    this->Brain::operator=(other);
}

Brain &Brain::operator =(Brain const &other)
{
    if (this == &other)
        return *this;
    int i = -1;
    while (++i < 100)
        ideas[i] = other.ideas[i];
    return *this;
}
