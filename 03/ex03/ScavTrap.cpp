#include "ScavTrap.hpp"
ScavTrap::ScavTrap()
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
    Name = "Name";
    Hitpoints = 100;
    Energy = 50;
    Attack = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    Name = name;
    Hitpoints = 100;
    Energy = 50;
    Attack = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
    *this = other;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap <" << Name << "> attack <" 
    << target << ">, causing <" << Attack << 
    "> points of damage!" << std::endl;
}

ScavTrap &ScavTrap::operator =(ScavTrap const &other)
{
    if (this == &other)
        return *this;
    this->Name = other.getName();
    this->Hitpoints = other.getHitpoints();
    this->Energy = other.getEnergy();
    this->Attack = other.getAttack();
    return *this;
}
