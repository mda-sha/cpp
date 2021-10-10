#ifndef ScavTrap_HPP
#define ScavTrap_HPP
#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(ScavTrap &other);
    void guardGate();
    void attack(std::string const & target);
    ScavTrap &operator =(ScavTrap const &other);
};

#endif