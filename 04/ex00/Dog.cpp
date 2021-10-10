#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "dog created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "dog destructed" << std::endl;
}

Dog::Dog(Dog const &other)
{
    *this = other;
}

Dog &Dog::operator =(Dog const &other)
{
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}

void Dog::makeSound()
{
    std::cout << "Woof woof" << std::endl;
}