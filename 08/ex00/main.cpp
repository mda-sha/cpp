#include <iostream>
#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> cont;
    cont.push_back(3);
    cont.push_back(7);
    cont.push_back(11);
    cont.push_back(13);
    cont.push_back(17);
    try
    {
        std::cout << "found " << *easyfind(cont, 13) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "there is no such a value in the container" << std::endl;
    }


    try
    {
        std::cout << "found " << *easyfind(cont, 12) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "there is no such a value in the container" << std::endl;
    }

}