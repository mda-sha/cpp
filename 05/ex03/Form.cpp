#include "Form.hpp"

Form::Form() : _name("form"), isSigned(false), gradeToSign(150), gradeToExec(150)
{}

Form::~Form()
{}

Form::Form(std::string name, int toSign, int toEx) : _name(name), gradeToSign(toSign), gradeToExec(toEx)
{
    isSigned = 0;
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooLowException();
    if (gradeToExec < 1 || gradeToSign < 1)
        throw GradeTooHighException();
}

Form::Form(const Form &f) : _name(f.getName()), gradeToSign(f.gradeToSign), gradeToExec(f.gradeToExec)
{
    *this = f;
}

Form& Form::operator=(const Form& other)
{
    (void)other;
    return *this;
}
    
std::string Form::getName() const
{
    return _name;
}

bool Form::getIsSigned() const
{
    return isSigned;
}

void Form::setIsSigned(bool a)
{
    isSigned = a;
}


int Form::getGradeToSign() const
{
    return gradeToSign;
}

int Form::getGradeToExec() const
{
    return gradeToExec;
}

void Form::beSigned(const Bureaucrat & bur)
{
    if (bur.getGrade() <= gradeToSign)
        isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator << (std::ostream &out, const Form &b)
{
    out << b.getName() << " form";
    if (b.getIsSigned())
        out << " is signed.";
    else
        out << " is not signed.";
    out << " Its grade to sign is " << b.getGradeToSign() << 
    ", and its grade to execute is " << b.getGradeToExec() << std::endl;
    return out;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "grade is too low";
}