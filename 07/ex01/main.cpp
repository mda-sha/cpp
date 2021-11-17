#include <iostream>
#include "iter.hpp"


template <typename T>
void function(T &a)
{
    std::cout <<  a << std::endl;
}

int main()
{
    std::string string_array[3] = {"dima", "fidel" , "puk"};
    int int_array[5] = {3, 5, 7, 11, 13};
    iter(string_array, 3, function);
    iter(int_array, 5, function);
}