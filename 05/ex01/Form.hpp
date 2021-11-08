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
    int getGradeToSign() const;
    int getGradeToExec() const;

    void beSigned(const Bureaucrat & bur);
};

std::ostream& operator << (std::ostream &out, const Form &b);


#endif