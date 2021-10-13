#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "animal created" << std::endl;
    type = "Animal";
}

Animal::~Animal()
{
    std::cout << "animal destructed" << std::endl;
}

Animal::Animal(Animal const &other)
{
    *this = other;
}

Animal &Animal::operator =(Animal const &other)
{
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "aertyujh" << std::endl;
}

std::string Animal::getType()const
{
    return type;
}
