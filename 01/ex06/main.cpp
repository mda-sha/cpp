#include "Karen.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "invalid arguments" << std::endl;
        return 1;
    }
    Karen karen;

    int i = -1;
    while (++i < 4)
    {
        if ((std::string)argv[1] == karen.levels[i])
        {
            break;
        }
    }
    switch (i)
    {
        case 0:
            karen.complain("DEBUG");
        case 1:
            karen.complain("INFO");
        case 2:
            karen.complain("WARNING");
        case 3:
            karen.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}