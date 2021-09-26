#include "Karen.hpp"

void Karen::debug(void)
{
    std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::Karen()
{
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
    funcs[0] = &Karen::debug;
    funcs[1] = &Karen::info;
    funcs[2] = &Karen::warning;
    funcs[3] = &Karen::error;
}

void Karen::complain(std::string level)
{
    int i = -1;
    while (++i < 4)
    {
        if (levels[i] == level)
        {
            (this->*(funcs[i]))();
            break;
        }
    }
}