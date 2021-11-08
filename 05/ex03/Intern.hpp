#ifndef INTERN
#define INTERN
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    std::string forms[3];
    Form* creation[4];
    std::string massages[4];
    void deleteForms(int i);
public:
    Intern();
    ~Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);
    Form *makeForm(std::string form, std::string target);
};


#endif