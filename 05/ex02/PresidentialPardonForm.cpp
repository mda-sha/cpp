#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("target")
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("PresidentialPardonForm", 25, 5)
{
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        setIsSigned(other.getIsSigned());
        _target = other._target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getIsSigned() && executor.getGrade() <= getGradeToExec())
        std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
    else if (executor.getGrade() > getGradeToExec())
        throw GradeTooLowException();
    else
        std::cout << getName() << " cannot be executed because it was nat signed." << std::endl;
}