#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    FragTrap a("Biba");
    ScavTrap b("Boba");
    a.attack("Boba");
    a.takeDamage(5);
    b.beRepaired(5);
    b.attack("Biba");
    b.guardGate();
    a.highFivesGuys();
}