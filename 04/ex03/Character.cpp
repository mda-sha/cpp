#include "Character.hpp"

Character::~Character()
{
    int i = -1;
    while (++i < 4)
        delete inventory[i];
}

Character::Character(std::string name)
{
    this->name = name;
    int i = -1;
    while (++i < 4)
        inventory[i] = nullptr;
}

Character::Character(const Character &other)
{
    int i = -1;
    while (++i < 4)
    {
        if (this->inventory[i])
            delete inventory[i];
        if (other.inventory[i])
            this->inventory[i] = other.inventory[i]->clone();
        else
            this->inventory[i] = nullptr;
    }
}

Character& Character::operator=(const Character &other)
{
    if (this == &other)
        return *this;
    int i = -1;
    while (++i < 4)
    {
        if (this->inventory[i])
            delete inventory[i];
        if (other.inventory[i])
            this->inventory[i] = other.inventory[i]->clone();
        else
            this->inventory[i] = nullptr;
    }
    return *this;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    int i = -1;
    while (++i < 4)
    {
        if (!this->inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (inventory[idx])
        inventory[idx]->use(target);
}