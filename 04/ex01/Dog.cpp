#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "dog created" << std::endl;
    brain = new Brain;
}

Dog::~Dog()
{
    std::cout << "dog destructed" << std::endl;
    delete brain;
}

Dog::Dog(Dog const &other)
{
    std::cout << "dog copy constructor" << std::endl;
    type = other.type;
    brain = new Brain(*other.brain);
}

Dog &Dog::operator =(Dog const &other)
{
    if (this == &other)
        return *this;
    delete brain;
    brain = new Brain(*other.brain);
    type = other.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
}

void *Dog::getBrainAddress()const
{
    return brain;
}