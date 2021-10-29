#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a ("puk", 159);
        std::cout << a;
        Bureaucrat b ("puk", 130);
        std::cout << b;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b ("puk", 130);
        b.decrementGrade();
        std::cout << b;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
}