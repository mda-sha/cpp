#ifndef KAREN_HPP
#define KAREN_HPP
#include <string>
#include <iostream>

class Karen{
    typedef void (Karen::*func)(void);

    func funcs[4];
    
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    void complain(std::string level);
    Karen();
    std::string levels[4];
};

#endif