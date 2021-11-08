#ifndef FORM
#define FORM

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    const std::string _name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExec;

public:
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };

    Form();
    ~Form();
    Form(std::string name, int toSign, int toEx);
    Form(const Form &f);
    Form& operator=(const Form& other);

    std::string getName() const;
    bool getIsSigned() const;
    void setIsSigned(bool a);
    int getGradeToSign() const;
    int getGradeToExec() const;

    void beSigned(const Bureaucrat & bur);
    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator << (std::ostream &out, const Form &b);


#endif