#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("target")
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form("ShrubberyCreationForm", 145, 137)
{
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        setIsSigned(other.getIsSigned());
        _target = other._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getIsSigned() && executor.getGrade() <= getGradeToExec())
    {
        std::string file_name = _target + "_shrubbery";
        std::ofstream file(file_name);
        file << "  _                      " << std::endl;
        file << " | |_ _ __ ___  ___  ___ " << std::endl;
        file << " | __| '__/ _ \\/ _ \\/ __|" << std::endl;
        file << " | |_| | |  __/  __/\\__ \\" << std::endl;
        file << "  \\__|_|  \\___|\\___||___/" << std::endl;
        file.close();
    }
    else if (executor.getGrade() > getGradeToExec())
        throw GradeTooLowException();
    else
        std::cout << getName() << " cannot be executed because it was nat signed." << std::endl;
}