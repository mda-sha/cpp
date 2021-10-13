#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wronganimal created" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wronganimal destructed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
    *this = other;
}

WrongAnimal &WrongAnimal::operator =(WrongAnimal const &other)
{
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "aertyujh" << std::endl;
}

std::string WrongAnimal::getType()const
{
    return type;
}
