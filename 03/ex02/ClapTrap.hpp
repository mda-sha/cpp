#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap{
protected:
    std::string Name;
    int Hitpoints;
    int Energy;
    int Attack;
public:
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap(std::string name);
    ClapTrap();
    ~ClapTrap();
    ClapTrap(ClapTrap &other);
    ClapTrap &operator =(ClapTrap const &other);
    std::string getName() const;
    int getHitpoints()const;
    int getEnergy()const;
    int getAttack()const;
};

#endif