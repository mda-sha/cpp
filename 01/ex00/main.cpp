#include "Zombie.hpp"

int main()
{
    Zombie* first = newZombie("zombie 1");
    randomChump("zombie 2");
    delete first;
}