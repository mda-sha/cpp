#ifndef CHARACTER
#define CHARACTER
#include "ICharacter.hpp"
#include "AMateria.hpp"
class Character : public ICharacter
{
    std::string name;
    AMateria *inventory[4];
public:
    Character();
    Character(std::string name);
    Character(const Character &other);
    Character& operator=(const Character &other);
    virtual ~Character();
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};
#endif