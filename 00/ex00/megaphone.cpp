#include <iostream>
#include <unistd.h>

void write_capital(char c)
{
	if (c >= 97 && c <= 122)
        c = c - 32;
    std::cout << c;
}

int main (int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int a = 0;
        int b;
        while (argv[++a])
        {
            b = -1;
            while(argv[a][++b])
                write_capital(argv[a][b]);
            std::cout << " ";
        }
        std::cout << std::endl; 
    }
}