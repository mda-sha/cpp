#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("target")
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form("RobotomyRequestForm", 72, 45)
{
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        setIsSigned(other.getIsSigned());
        _target = other._target;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getIsSigned() && executor.getGrade() <= getGradeToExec())
    {
        std::cout << "* drilling noises *" << std::endl;
        srand((unsigned int)time(NULL));
        int a = rand() % 2;
        if (a)
            std::cout << _target << " has been robotomized successfully." << std::endl;
        else
            std::cout << _target << " has not been robotomized." << std::endl;
    }
    else if (executor.getGrade() > getGradeToExec())
        throw GradeTooLowException();
    else
        std::cout << getName() << " cannot be executed because it was nat signed." << std::endl;
}