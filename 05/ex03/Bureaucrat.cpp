#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name)
{
    this->_grade = other.getGrade();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        this->_grade = other.getGrade();
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade is too low";
}

const std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade < 2)
        throw GradeTooHighException();
    else
        _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade > 149)
        throw GradeTooLowException();
    else
        _grade++;

}

void Bureaucrat::signForm(Form & f) const
{
    if (_grade <= f.getGradeToSign())
    {
        f.beSigned(*this);
        std::cout << _name << " signs " << f.getName() << std::endl;
    }
    else
        std::cout << _name << " cannot sign " << f.getName() << " because his grade is too low" << std::endl;
}

void Bureaucrat::executeForm(Form const & form)
{
    if (_grade <= form.getGradeToExec() && form.getIsSigned())
        form.execute(*this);
    else if (_grade > form.getGradeToExec())
        std::cout << _name << " cannot execute " << form.getName() << " because his grade is too low" << std::endl;
    else
        std::cout << form.getName() << "cannot be executed because it was not signed" << std::endl;
}

std::ostream& operator << (std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << " " << b.getGrade() << std::endl;
    return out;
}