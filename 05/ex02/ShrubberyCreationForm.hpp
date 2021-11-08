#ifndef ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    std::string _target;
    public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
    virtual void execute(Bureaucrat const & executor) const;
};


#endif