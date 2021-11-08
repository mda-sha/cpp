#ifndef RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp

#include "Form.hpp"
#include <ctime>

class RobotomyRequestForm : public Form
{
    std::string _target;
    public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm();
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
    virtual void execute(Bureaucrat const & executor) const;
};

#endif