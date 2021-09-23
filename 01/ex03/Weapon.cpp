#include "Weapon.hpp"

void Weapon::setType(std::string str)
{
    type = str;
}

std::string& Weapon::getType()
{
    std::string& tp = type;
    return tp;
}
Weapon::Weapon(std::string type)
{
    this->type = type;
}