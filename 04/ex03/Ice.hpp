#ifndef ICE
#define ICE
#include "AMateria.hpp"

class Ice : public AMateria{

public:
    Ice();
    ~Ice();
    Ice(Ice const &other);
    Ice &operator=(Ice const &other);
    virtual void use(ICharacter& target);
    virtual AMateria* clone() const;
};

#endif