#ifndef CURE
#define CURE
#include "AMateria.hpp"

class Cure : public AMateria{

public:
    Cure();
    ~Cure();
    Cure(Cure const &other);
    Cure &operator=(Cure const &other);
    virtual void use(ICharacter& target);
    virtual AMateria* clone() const;
};

#endif