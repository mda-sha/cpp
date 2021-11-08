#include "Intern.hpp"

Intern::Intern()
{
    forms[0] = "shrubbery creation";
    forms[1] = "robotomy request";
    forms[2] = "presidential pardon";
    massages[0] = "Intern creates shrubbery creation form.";
    massages[1] = "Intern creates robotomy request form.";
    massages[2] = "Intern creates presidential pardon form.";
    massages[3] = "Intern doesnt know any form like this.";
}

Intern::~Intern()
{}

Intern::Intern(const Intern& other)
{
    *this = other;
}

Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

void Intern::deleteForms(int i)
{
    int j = 0;
    while (j <= 2)
    {
        if (j != i)
            delete creation[j];
        j++;
    }
}

Form *Intern::makeForm(std::string form, std::string target)
{
    creation[0] = new ShrubberyCreationForm(target);
    creation[1] = new RobotomyRequestForm(target);
    creation[2] = new PresidentialPardonForm(target);
    creation[3] = nullptr;
    int i = 0;
    while (i <= 2 && form.compare(forms[i]))
        i++;
    std::cout << massages[i] << std::endl;
    deleteForms(i);
    return creation[i];
}