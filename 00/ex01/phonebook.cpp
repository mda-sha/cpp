#include <iostream>
#include <string>

using std::string;

class contact{
public:
    string name;
    string number;

    void set_name()
    {
        // char * nm;
        // name = "pisya";
        std::cout << name << std::endl;
        // std::cout << "NAME ";
        // std::getline(std::cin, name);
        // std::size_t len = name.copy(nm, 1, 20);
        // this->name = nm;
    }
    void set_number()
    {
        char buff[50];
        std::cout << "NUMBER ";
        std::cin >> buff;
        number = buff;
    }
    contact()
    {
        name = "pisya";

    }
};

int add_contact(contact VASYA[8], int lastAdded)
{
        lastAdded++;
        if (lastAdded == 8)
            lastAdded = 0;
                // std::cout << VASYA[lastAdded].name << std::endl;
        VASYA[lastAdded].set_name();
        VASYA[lastAdded].set_number();
        std::cout << "added contact " << VASYA[lastAdded].name << " " << VASYA[lastAdded].number << std::endl;
        return (lastAdded);
}

void search_contact(contact VASYA[8])
{
        std::cout << "contact not found" << std::endl;
}

int main ()
{
    contact VASYA[8];
    int lastAdded = 0;
    string cmd;

    while (1)
    {
        std::cout << "enter a command (ADD, SEARCH or EXIT) " << std::endl;
        std::getline(std::cin, cmd);
        if (!cmd.compare("exit"))
            break;
        else if (!cmd.compare("add"))
            lastAdded = add_contact(&VASYA[8], lastAdded);
        else if (!cmd.compare("search"))
            search_contact(&VASYA[8]);
    }
}