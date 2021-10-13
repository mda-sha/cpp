#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "Wrongcat created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrongcat destructed" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other)
{
    *this = other;
}

WrongCat &WrongCat::operator =(WrongCat const &other)
{
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}