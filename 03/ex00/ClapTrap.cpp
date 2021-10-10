#include "ClapTrap.hpp"

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap <" << Name << "> attack <" 
    << target << ">, causing <" << Attack << 
    "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap <" << Name << "> take " 
    << amount << " points of damage" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap <" << Name << "> repaired " <<
    amount << " points of energy" << std::endl; 
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor called" << std::endl;
    Name = name;
    Hitpoints = 10;
    Energy = 10;
    Attack = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    Name = "Name";
    Hitpoints = 10;
    Energy = 10;
    Attack = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other)
{
    *this = other;
}

ClapTrap &ClapTrap::operator =(ClapTrap const &other)
{
    if (this == &other)
        return *this;
    this->Name = other.getName();
    this->Hitpoints = other.getHitpoints();
    this->Energy = other.getEnergy();
    this->Attack = other.getAttack();
    return *this;
}

std::string ClapTrap::getName()const
{
    return this->Name;
}

int ClapTrap::getHitpoints()const
{
    return this->Hitpoints;
}

int ClapTrap::getEnergy()const
{
    return Energy;
}

int ClapTrap::getAttack()const
{
    return Attack;
}