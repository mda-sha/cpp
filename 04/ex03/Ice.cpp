#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::~Ice()
{

}

Ice::Ice(Ice const &other)
{
    *this = other;
}

Ice &Ice::operator=(Ice const &other)
{
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}

void Ice::use(ICharacter& target)
{
    std::cout << "*shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria* new_materia = new Ice(*this);
    return new_materia;
}