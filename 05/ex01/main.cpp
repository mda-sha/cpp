#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a ("dima", 100);
        std::cout << a;
        Form b ("puk", 110, 90);
        std::cout << b;
        a.signForm(b);
        std::cout << b;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
}