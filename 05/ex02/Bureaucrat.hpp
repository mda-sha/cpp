#ifndef BUREACRAT
#define BUREACRAT
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
    const std::string _name;
    int _grade;
public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
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
    const std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    void signForm(Form & f) const;
    void executeForm(Form const & form);
};

std::ostream& operator << (std::ostream &out, const Bureaucrat &b);

#endif