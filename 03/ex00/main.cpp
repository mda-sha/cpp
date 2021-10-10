#include "ClapTrap.hpp"
int main()
{
    ClapTrap a("Biba");
    ClapTrap b("Boba");
    a.attack("Boba");
    a.takeDamage(5);
    a.beRepaired(5);
    return (0);
}