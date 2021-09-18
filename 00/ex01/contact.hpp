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
    void set_secret()
    {
        std::cout << "DARKEST SECRET ";
        std::getline(std::cin, darkest_secret);
    }
    void set_number()
    {
        char buff[50];
        std::cout << "PHONE NUMBER ";
        std::cin >> buff;
        phone_number = buff;
        std::cin.ignore(32767, '\n');
    }
    void print_everithing()
    {
        std::cout << "FIRST NAME " << first_name << std::endl;
        std::cout << "LAST NAME " << last_name << std::endl;
        std::cout << "NICKNAME " << nickname << std::endl;
        std::cout << "PHONE NUMBER " << phone_number << std::endl;
        std::cout << "DARKEST SECRET " << darkest_secret << std::endl;
    }
    bool check_if_exists()
    {
        if (!first_name.empty())
            return true;
        return false;
    }
    void print_data(std::string str)
    {
        int len = str.length();
        std::string new_str = str;

        if (len < 10)
        {
            int space = 10 - len;
            while (space--)
                std::cout << " ";
        }
        if (len > 10)
            new_str.resize(9);
        std::cout << " " << new_str;
        if (len > 10)
            std::cout << ".";
        std::cout << " |";
    }

    void print_table(int i)
    {
        std::cout << "         " << i + 1 << " |";
        print_data(first_name);
        print_data(last_name);
        print_data(nickname);
        std::cout << std::endl;
    }
};