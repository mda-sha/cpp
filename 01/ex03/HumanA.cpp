#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name  << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) :  name(name), weapon(weapon)
{
    // this->weapon = weapon;
    // this->name = name;
}
