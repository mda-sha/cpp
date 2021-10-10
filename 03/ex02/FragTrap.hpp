#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap &other);
    void attack(std::string const & target);
    void highFivesGuys(void);
    FragTrap &operator =(FragTrap const &other);
};

#endif