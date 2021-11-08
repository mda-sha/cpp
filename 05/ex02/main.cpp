#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Bureaucrat a ("dima", 5);
        std::cout << a;
        // ShrubberyCreationForm b ("puk");
        // PresidentialPardonForm b ("puk");
        RobotomyRequestForm b ("puk");
        std::cout << b;
        a.signForm(b);
        std::cout << b;
        // b.execute(a);
        a.executeForm(b);
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
}