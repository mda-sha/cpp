#include "FragTrap.hpp"
FragTrap::FragTrap()
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    Name = "Name";
    Hitpoints = 100;
    Energy = 100;
    Attack = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    Name = name;
    Hitpoints = 100;
    Energy = 100;
    Attack = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &other)
{
    *this = other;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "a positive high fives request" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap <" << Name << "> attack <" 
    << target << ">, causing <" << Attack << 
    "> points of damage!" << std::endl;
}

FragTrap &FragTrap::operator =(FragTrap const &other)
{
    if (this == &other)
        return *this;
    this->Name = other.getName();
    this->Hitpoints = other.getHitpoints();
    this->Energy = other.getEnergy();
    this->Attack = other.getAttack();
    return *this;
}