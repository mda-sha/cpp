#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::~Cure()
{

}

Cure::Cure(Cure const &other)
{
    *this = other;
}

Cure &Cure::operator=(Cure const &other)
{
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}

void Cure::use(ICharacter& target)
{
    std::cout << "*heals " << target.getName() << "'s wounds*" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria* new_materia = new Cure(*this);
    return new_materia;
}