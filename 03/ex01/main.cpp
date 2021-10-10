#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ClapTrap a("Biba");
    ScavTrap b("Boba");
    a.attack("Boba");
    a.takeDamage(5);
    b.beRepaired(5);
    b.attack("Biba");
    b.guardGate();
}