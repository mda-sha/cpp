#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria()
{

}

AMateria::AMateria(AMateria const &other)
{
    *this = other;
}

AMateria::~AMateria()
{

}

std::string const &AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria & AMateria::operator= ( const AMateria & other )
{
    if (this == &other)
        return *this;
    type = other.type;
    return *this;
}