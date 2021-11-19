#include <iostream>
#include <vector>
#include "span.hpp"

int main()
{
    try
    {
        Span sp = Span(15);

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        // std::vector<int> v(5);

        // v.push_back(100);
        // v.push_back(10000);
        // v.push_back(-10);
        // v.push_back(9);
        // v.push_back(11);
        // sp.addNumber(v.begin(), v.end());
        // std::cout << sp.shortestSpan() << std::endl;
        // std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::logic_error& e)
    {
        std::cerr << e.what() << '\n';
    }
}


// int main()
// {
//     try
//     {
//         int i = 11000;
//         Span sp(i);
//         while (i--)
//         {
//             sp.addNumber(i);
//         }
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;
//     }

//     catch(const std::logic_error& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// }