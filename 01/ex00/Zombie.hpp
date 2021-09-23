#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
    std::string name;
public:
    void set_name(std::string nm);
    void announce();
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif