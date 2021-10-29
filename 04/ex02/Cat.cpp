#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain;
    std::cout << "cat created" << std::endl;
}

Cat::~Cat()
{
    std::cout << "cat destructed" << std::endl;
    delete brain;
}

Cat::Cat(Cat const &other)
{
    type = other.type;
    brain = new Brain(*other.brain);
}

Cat &Cat::operator =(Cat const &other)
{
    if (this == &other)
        return *this;
    delete brain;
    brain = new Brain(*other.brain);
    type = other.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}