#ifndef AMATERIA
#define AMATERIA
#include <iostream>
#include "Character.hpp"
class ICharacter;

class AMateria{
protected:
    std::string type;
public:
    AMateria(std::string const & type);
    AMateria();
    AMateria(AMateria const &other);
    virtual ~AMateria();
    AMateria &operator = (AMateria const &other);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif