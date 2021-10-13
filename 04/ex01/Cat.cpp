#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "cat created" << std::endl;
}

Cat::~Cat()
{
    std::cout << "cat destructed" << std::endl;
}

Cat::Cat(Cat const &other)
{
    *this = other;
}

Cat &Cat::operator =(Cat const &other)
{
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}