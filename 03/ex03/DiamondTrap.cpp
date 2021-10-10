#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap()
{
    std::cout << "Default DiamondTrap constructor called" << std::endl;
    Name = "Name";
    ClapTrap::Name = "Boba";
    Hitpoints = FragTrap::Hitpoints;
    Energy = ScavTrap::Energy;
    Attack = FragTrap::Attack;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    Name = name;
    ClapTrap::Name = "Boba";
    Hitpoints = FragTrap::Hitpoints;
    Energy = ScavTrap::Energy;
    Attack = FragTrap::Attack;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
    *this = other;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

DiamondTrap &DiamondTrap::operator =(DiamondTrap const &other)
{
    if (this == &other)
        return *this;
    this->Name = other.getName();
    this->FragTrap::Hitpoints = other.FragTrap::getHitpoints();
    this->ScavTrap::Energy = other.ScavTrap::getEnergy();
    this->FragTrap::Attack = other.FragTrap::getAttack();
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << Name << "\nClapTraps name: " << ClapTrap::Name << std::endl;
}