#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " destructed" << std::endl;
}
void Zombie::set_name(std::string nm)
{
    name = nm;
}