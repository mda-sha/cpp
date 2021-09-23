#include "Zombie.hpp"

int main()
{
    int N = 4;
    Zombie* horde = zombieHorde(N, "Vitalik");
    int i = -1;
    while (++i < N)
        horde[i].announce();
    delete [] horde;
}