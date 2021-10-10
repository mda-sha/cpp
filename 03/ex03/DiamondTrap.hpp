#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    std::string Name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(DiamondTrap &other);
    void attack(std::string const & target);
    DiamondTrap &operator =(DiamondTrap const &other);
    void whoAmI();
};

#endif