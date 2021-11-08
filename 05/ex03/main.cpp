#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern a;
    Form *b = a.makeForm("robotomy request", "puk");
    if (!b)
        return 1;
    try
    {
        Bureaucrat a ("dima", 5);
        std::cout << a;
        std::cout << *b;
        a.signForm(*b);
        std::cout << *b;
        a.executeForm(*b);
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
}