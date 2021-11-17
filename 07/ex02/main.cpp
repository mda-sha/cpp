#include <iostream>
#include "Array.hpp"

int main()
{

    try
    {
        Array<std::string> a;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Array<std::string> a (3);
        a[0] = "nastya";
        a[1] = "dima";
        a[2] = "fidel";
        int i = 0;
        while (i < 3)
        {
            std::cout << a[i] << std::endl;
            i++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Array<int> a (5);
        a[0] = 3;
        a[1] = 5;
        a[2] = 7;
        a[3] = 11;
        a[4] = 13;
        std::cout << a[4] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
