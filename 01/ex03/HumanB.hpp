#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanB{
    Weapon* weapon;
    std::string name;
public:
    void attack();
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
};
#endif