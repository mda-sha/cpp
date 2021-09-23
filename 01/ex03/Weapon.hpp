#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon{
    std::string type;
public:
    void setType(std::string str);
    std::string& getType();
    Weapon(std::string type);
};
#endif