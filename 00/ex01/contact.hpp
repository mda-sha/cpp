#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

class contact{
private:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:

    void set_first_name();
    void set_last_name();
    void set_nickname();
    void set_secret();
    void set_number();
    void print_everithing();
    bool check_if_exists();
    void print_data(std::string str);
    void print_table(int i);
};
#endif