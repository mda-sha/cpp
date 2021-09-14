#include <iostream>
#include <string>

using std::string;

class contact{
public:
    string first_name;
    string last_name;
    string nickname;
    string phone_number;
    string darkest_secret;

    void set_first_name()
    {
        std::cout << "FIRST NAME ";
        std::getline(std::cin, first_name);
    }
    void set_last_name()
    {
        std::cout << "LAST NAME ";
        std::getline(std::cin, last_name);
    }
    void set_nickname()
    {
        std::cout << "NICKNAME ";
        std::getline(std::cin, nickname);
    }
    void set_number()
    {
        char buff[50];
        std::cout << "PHONE NUMBER ";
        std::cin >> buff;
        phone_number = buff;
        std::cin.ignore(32767, '\n');
    }
    contact()
    {
        first_name = "0";
    }
};